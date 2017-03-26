#include <iostream>

using namespace std;

int** AllocateMemory(int, int, int);
void EnterMemory(int**, int, int, int);
void DisplayMemory(int**, int, int, int);
void DisplayMemory(int*, int);
int* FoundSum(int**, int, int, int);


int main()
{
	int n, m, k;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter m: ";
	cin >> m;
	cout << "Enter k: ";
	cin >> k;
	int** matrix = AllocateMemory(n, m, k);
	EnterMemory(matrix, n, m, k);
	DisplayMemory(matrix, n, m, k);
	cout << endl;
	cout << endl;
	DisplayMemory(FoundSum(matrix, n, m, k), k);
	system("pause");
	return 0;
}

int** AllocateMemory(int m, int n, int k)
{
	int** matrix = new int*[k];
	for (int i = 0; i < k; i++)
	{
		matrix[i] = new int[n*m];
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				matrix[i][j*m + l] = 0;
			}
			return matrix;
		}
	}
}

void EnterMemory(int** matrix, int n, int k, int m)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int l = 0; l < m; l++)
			{
				matrix[i][j*m + l] = rand() % 10;
			}
		}
	}
}

void DisplayMemory(int** matrix, int n, int k, int m)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << endl;
			for (int l = 0; l < m; l++)
			{
				cout << matrix[i][m*j + l] << "  ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

void DisplayMemory(int *arr, int n)
{
	for (int j = 0; j < n; j++)
	{
		cout << arr[j] << "  ";
	}
}

int* FoundSum(int** matrix, int n, int k, int m)
{
	int* arr = new int[n*m];
	for (int i = 0; i < k; i++)
	{
		int sum = 0;
		for (int j = 0; j < m*m; j++)
		{
			sum += matrix[i][j];
		}
		arr[i] = sum;
	}
	return arr;
}