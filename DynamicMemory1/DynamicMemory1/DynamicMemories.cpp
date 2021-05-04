#include<iostream>
using namespace std;

//void FillRand(int arr1[], const int n);
template <typename T> T** Allocate(const int k, const int l);	//�������� ������ ��� ������������ ������
 void FillRand(int** arr, const int k, const int l);
 void FillRand(float** arr, const int k, const int l);
 void FillRand(double** arr, const int k, const int l);
 void FillRand(char** arr, const int k, const int l);
template <typename T> void Print(T** arr, const int k, const int l);//������� ���������� ������������� ������
template <typename T> void Clear(T** arr, const int k);		//������� ������������ ������
template <typename T> void push_row_back(T**& arr, int& k, const int l);	//��������� ������ � ����� ���������� ������������� �������
//template <typename T> void FillRand1(T arr[], const int l, T maxRand, T minRand);//��������� ����� � ������
template <typename T> void push_row_front(T**& arr, int& k, const int l, T& value2);//��������� ������ � ������ ���������� ������������� �������
template <typename T> void insert_row(T**& arr, int& k, const int l, int index2);	//��������� ������ � ��������� ������������ ������ �� �������
template <typename T> void pop_row_back(T**& arr, int& k, const int l);	//������� ������ � ����� ���
template <typename T> void pop_row_front(T**& arr, int& k, const int l);	//������� ������ � ������ ���
template <typename T> void erase_row(T**& arr, int& k, const int l, int index); //������� ������ �� ���������� �������
template <typename T> void push_col_back(T** arr, const int k, int& l);	//��������� ������� � ����� ���
template <typename T> void push_col_front(T** arr, const int k, int& l, T value3);//��������� ������� � ������ ���
template <typename T> void insert_col(T** arr, const int k, int& l, T value1, int index1);	//��������� ������� �� ���������� �������
template <typename T> void pop_col_back(T** arr, const int k, int& l); 	//������� ������� � ����� ���
template <typename T> void pop_col_front(T** arr, const int k, int& l); //������� ������� � ������ ���
template <typename T> void erase_col(T** arr, const int k, int& l, int index4);	//������� ������� �� ���������� �������

typedef char data_type;

//void Print(int arr[], const int n);
//void insert(int*& arr, int& n, int value, int index);	//��������� �������� � ������ �� ���������� �������
//void pop_back(int*& arr, int& n); //������� �������� � ����� �������
//void pop_front(int*& arr, int& n);//������� �������� � ������ �������
//void erase(int*& arr, int& n, int index);//������� �������� �� �������

#define Probel "**********************************************************"

void main()
{
	setlocale(LC_ALL, "Russian");
	/*int n; //������ �������
	cout << "������� ������ �������: ";  cin >> n;

	int* arr1 = new int [n] {};//�������� ������������ ������
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "������� ����������� ��������: "; cin >> value;
	//1 �������� ���� ������ ������� �������  � ������� �������� ������ ��������������
	int* buffer = new int[n + 1]{};
	//2 �������� ��������� �� ��������� ������� � ��������
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3 ������� �������� ������
	delete[] arr;
	//4 ��������� ����� ������� ������� ������� ������ �������
	arr = buffer;
	//���������� �������� � ����� �������
	arr[n] = value;
	//6 ����� ���������� ������ ������� ������������� �� 1
	n++;
	Print(arr, n);

	int index;
	cout << "������� ����������� ��������: "; cin >> value;
	cout << "������� index: "; cin >> index;
	insert(arr, n, value, index);
	Print(arr, n);

	cout << "������� ��������� �������� �������: "<<"\n";
	pop_back(arr, n);
	Print(arr, n);

	cout << "������� ������ �������� �������: " << "\n";
	pop_front(arr, n);
	Print(arr, n);


	cout << "������� index: "; cin >> index;
	cout << "�������  �������� ������� �� �������: " << "\n";
	erase(arr, n, index);
	Print(arr, n);

	delete [] arr;
	*/

	int k; //���-�� �����
	int l; //���-�� �������� (�������� ������)
	cout << "������� ���-�� ����� ������������� �������: " << "\n"; cin >> k;
	cout << "������� ���-�� ������� ������������� �������: " << "\n"; cin >> l;
	//1 ������� ������ ����������
	
	data_type** arr= Allocate<data_type>(k,l);
	
	FillRand( arr,  k,  l);
	Print(arr,  k,  l);
	cout << "\n";  
	Probel;
	

	cout << "\n";
	Probel;
	cout << "��������� ������ � ����� ����������� �������: " << "\n";
	 push_row_back( arr, k, l);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������ � ������ ����������� �������: " << "\n";
	data_type value2;
	cout << "������� ����������� ��������: " << "\n"; cin >> value2;
	 push_row_front( arr,  k,  l,  value2);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������ �� ������� �  ���������� ������: " << "\n";
	int index2;
	cout << "������� ������: " << "\n"; cin >> index2;
	 insert_row( arr, k,  l,  index2);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������ � ����� ����������� ������������� ������� : " << "\n";
	 pop_row_back(  arr,  k,  l);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������ � ������ ����������� ������������� ������� : " << "\n";
    pop_row_front ( arr,  k,  l);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������ �� ������� ����������� ������������� �������: " << "\n";
	int index;
	cout << "������� ������: " << "\n"; cin >> index;
    erase_row(arr,  k,  l, index);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������� � ����� ����������� �������: " << "\n";
	push_col_back( arr,  k,  l);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������� � ������ ����������� �������: " << "\n";
	data_type value3;
	cout << "������� ����������� ��������: " << "\n"; cin >> value3;
	 push_col_front(  arr,  k,  l,  value3);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������� ����������� ������� �� �������: " << "\n";
	data_type value1;
	int index1;
	cout << "������� ������: " << "\n"; cin >> index1;
	cout << "������� ����������� ��������: " << "\n"; cin >> value1;
	insert_col( arr,  k,  l,   value1, index1);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "������� ������� � ����� ����������� �������: " << "\n";
	pop_col_back( arr, k,  l);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "������� ������� � ������ ����������� �������: " << "\n";
	pop_col_front ( arr, k, l);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������� ����������� ������� �� �������: " << "\n";
	int index4;
	cout << "������� ������: " << "\n"; cin >> index4;
	erase_col( arr,  k, l,  index4);
	Print( arr, k, l);

	Clear(arr, k);
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
/*
void insert(int*& arr, int& n, int value, int index)
{
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = index; i < n; i++)
	{
		buffer[i+1] = arr[i];
	}
	//for (int i = 0; i < n; i++) ������������� 2 ����� ����� ������� �������� �����������
	//{
		//(i < index) ? buffer[i]  : buffer[i + 1]) = arr[i];
	//} 
	delete[]arr;
	arr = buffer;
	arr[index] = value;
	n++;
}

void pop_back(int*& arr, int& n)
{
	int* buffer = new int[--n];//�������� ������ �� 1 ������ ��������� 
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	delete[]arr;
	arr = buffer;
}

void pop_front(int*& arr, int& n)
{
	int* buffer = new int[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i+1];
	}
	delete[]arr;
	arr = buffer;

}

void erase(int *&arr, int& n, int index)
{    
	int* buffer = new int[n--]{};
	for (int i = 0; i < index; i++)
	{
		buffer[i] = arr[i];
	}
	for (int i = index; i < n; i++)
	{
		buffer[i] = arr[i+1];
	}
	delete[]arr;
	arr = buffer;
}
	*/

template <typename T> T** Allocate(const int k, const int l)
{
	//1 ������� ������ ����������
	T** arr = new T* [k];
	//2 �������� ������ ��� ����� ���������� �������������  �������
	for (int i = 0; i < k; i++)
	{
		arr[i] = new T[l];
	}

	return arr;
}

void FillRand(int** arr, const int k, const int l)
{
	//3 ������ � ������������ ��������� ��������
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}
void FillRand(float** arr, const int k, const int l)
{
	//3 ������ � ������������ ��������� ��������
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}

}
void FillRand(double** arr, const int k, const int l)
{
	//3 ������ � ������������ ��������� ��������
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j] = rand() % 100;
			arr[i][j] /=10;
		}
	}

}
void FillRand(char** arr, const int k, const int l)
{
	//3 ������ � ������������ ��������� ��������
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			arr[i][j] = rand() % 166;
			
		}
	}

}
template <typename T> void Print(T** arr, const int k, const int l)
{
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < l; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template <typename T> void Clear(T** arr, const int k)
{
	for (int i = 0; i < k; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

template <typename T> void push_row_back(T**& arr, int& k, const int l)

{
	T** buffer = new T* [k+1];//������� ��������� ������ ����������
	
	for (int i = 0; i < k; i++)//�������� ������ ����� ��������� ������� � ��������
	{
		buffer[i] = arr[i];
	}
	delete [] arr; //������� �������� ������ ����������
	arr = buffer;//������ ��� ����� ������
	buffer[k] = new T[l] {}; //�������� ������
	//����� ��������� ������ � ������ ��� �� ��� ����� ����������� �� 1
	k++;
}

//template <typename T> void FillRand1(T arr[], const int l, int maxRand, T minRand)
//{
	//for (int i = 0; i < l; i++)
	//{
		//arr[i] = rand() % (maxRand - minRand) + minRand;
	//}
//}

template <typename T> void push_row_front(T**& arr, int& k, const int l, T& value2)
{
	T** buffer = new T *[k++]{};
	buffer[0] = new T[l];
	for (int i = 0; i < l; i++)
	{
		buffer[i + 1] = arr[i];
	}
		
	for (int i = 0; i < k; i++)
	{
		buffer[0][i] = value2; //�������� ������
	}
	
delete[] arr;
	arr = buffer;//������ ��� ����� ������
	
	//����� ��������� ������ � ������ ��� �� ��� ����� ����������� �� 1
	k++;
}

template <typename T> void insert_row(T**& arr, int& k, const int l, int index2)
{ 
	if (index2 > k)return;
	T** buffer = new T* [k + 1];
	for (int i =0; i<index2; i++)
	{
		buffer[i] = arr[i];
	}
	
	for (int i = index2; i < k; i++)
	{
		buffer[i+1] = arr[i];
	}
	
	delete[] arr;

	arr = buffer;//������ ��� ����� ������
	arr[index2] = new T[l]{};
	//for (int i = 0; i < k; i++)
	//{
		//arr[index][i] = new int [l] {}; //�������� ������
	//}
	
	//����� ��������� ������ � ������ ��� �� ��� ����� ����������� �� 1
	k++;
}

template <typename T> void pop_row_back(T**& arr, int& k, const int l)
{
	T** buffer = new T* [--k];//������� ��������� ������ ����������
	for (int i = 0; i < k; i++)//�������� ������ ����� ��������� ������� � ��������
	{
		buffer[i] = arr[i];
	}
	delete[] arr[k]; //������� ��������� ������ �� ������
	delete[] arr;//������� ������ ����������
	arr = buffer;//��������� �� ����� ������ ���������� 
}

template <typename T> void pop_row_front(T**& arr, int& k, const int l)
{
	
	T** buffer = new T*[k-1];
	
	for (int i = 0; i < k; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	k--;
}

template <typename T> void erase_row(T**& arr, int& k, const int l, int index)
{
	
	T** buffer = new  T*[k-1];
   for (int i = 0; i < index; i++)
   {
	   buffer[i] = arr[i];

   }
   for (int i = index; i < k; i++)
   {
	  buffer[i] = arr[i + 1];
   }
    delete[]arr;
    arr = buffer;
    k--;
}

template <typename T> void push_col_back(T** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		T* buffer = new T[l + 1]{};

		// �������� �������� ������ � ������
		for (int j = 0; j < l; j++)
		{

			buffer[j] = arr[i][j];
		}
	delete[] arr[i]; //������� �������� ������
	arr[i] = buffer;
		//�������� �������
	}
	l++;
}

template <typename T> void push_col_front(T** arr, const int k, int& l, T value3)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		T* buffer = new T[l + 1]{};

		// �������� �������� ������ � ������
		for (int j = 0; j < l; j++)
		{
			(j > 0) ? buffer[j] = arr[i][j-1] : buffer[j] = value3;
			
		}
		delete[] arr[i]; //������� �������� ������
		arr[i] = buffer;
		//�������� �������
	}
	l++;
}

template <typename T> void insert_col(T** arr, const int k, int& l, T value1, int index1)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		T* buffer = new T[l + 1]{};

		// �������� �������� ������ � ������
		for (int j = 0; j < l; j++)
		{
			if (j > index1)  buffer[j] = arr[i][j - 1];
			if (j==index1)  buffer[j] = value1;
			if (j < index1) buffer[j] = arr[i][j];

		}
		delete[] arr[i]; //������� �������� ������
		arr[i] = buffer;
		//�������� �������
	}
	l++;
}

template <typename T> void pop_col_back(T** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		T* buffer = new T[l - 1]{};

		// �������� �������� ������ � ������
		for (int j = 0; j < l-1; j++)
		{

			buffer[j] = arr[i][j];
		}
		delete[] arr[i]; //������� �������� ������
		arr[i] = buffer;
		//������� �������
	}
	l--;
}

template <typename T> void pop_col_front(T** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		T* buffer = new T[l - 1]{};

		// �������� �������� ������ � ������
		for (int j = 0; j < l; j++)
		{
			if (j > 0)  buffer[j-1] = arr[i][j];
			
		}
		delete[] arr[i]; //������� �������� ������
		arr[i] = buffer;
		//������� �������
	}
	l--;

}

template <typename T> void erase_col(T** arr, const int k, int& l, int index4)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		T* buffer = new T[l - 1]{};

		// �������� �������� ������ � ������
		for (int j = 0; j < l; j++)
		{
			if (j > index4)  buffer[j-1] = arr[i][j];
			if (j < index4) buffer[j] = arr[i][j];

		}
		delete[] arr[i]; //������� �������� ������
		arr[i] = buffer;
		//�������� �������
	}
	l--;
}
	

	
			
			
