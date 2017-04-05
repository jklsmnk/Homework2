#include <iostream>

using namespace std;

class Complex
{
public:
	Complex()
	{
		real = 0;
		imaginary = 1;
	}
	Complex(double re, double im)
	{
		setComplex(re, im);
	}

	void setComplex(double re, double im)
	{
		real = re;
		imaginary = im;
	}
	Complex add(Complex z1)
	{
		Complex z2(0, 0);
		z2.real = real + z1.real;
		z2.imaginary = imaginary + z1.imaginary;
		return z2;
	}
	Complex minus()
	{
		Complex z(-real, -imaginary);
		return z;
	}

	Complex substract(Complex z3)
	{
		Complex z4;
		z4.real = real + z3.real;
		z4.imaginary = imaginary + z4.imaginary;
		return z4;
	}
	double radius()
	{
		return sqrt(real*real + imaginary*imaginary);
	}

	void Display()
	{
		cout << real << "+" << imaginary << "i" << endl;
	}
private:
	double real, imaginary;

};

int main()
{
	Complex z1, z2, z3;
	z1.setComplex(2, -1);
	z1.Display();
	z2.setComplex(3, 1);
	z2.Display();
	z3 = z1.add(z2);
	z3.Display();
	Complex  Array[5]; 
	for (int i = 0; i < 5; i++)
	{
		Array[i].setComplex(i, i + 1);
		cout << Array[i].radius() << endl;
	}
	Complex* zPointer = &z1;
	zPointer->setComplex(3, 5);
	cout << "Values of Array of pointers" << endl;
	Complex* zA = new Complex[5];
	for (int i = 0; i < 5; i++)
	{
		zA->setComplex(i, i + 1);
		cout << zA->radius() << endl;
	}
	system("pause");
	return 0;
}