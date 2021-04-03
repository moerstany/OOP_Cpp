#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Russian");
	int n; //размер массива
	cout << "¬ведите размер массива: ";  cin >> n;

	int* arr = new int [n] {};
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "введите добавл€емое значение: "; cin >> value;
	delete [] arr;
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}

}

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << endl;
}