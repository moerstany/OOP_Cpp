#include<iostream>
using namespace std;

//void FillRand(int arr1[], const int n);
int** Allocate(const int k, const int l);	//�������� ������ ��� ������������ ������
void FillRand(int** arr, const int k, const int l);
void Print(int** arr, const int k, const int l);//������� ���������� ������������� ������
void Clear(int** arr, const int k);		//������� ������������ ������
void push_row_back(int**& arr,  int& k, const int l);	//��������� ������ � ����� ���������� ������������� �������
void FillRand1(int arr[], const int l, int maxRand, int minRand);//��������� ����� � ������
void push_row_front(int**& arr, int& k, const int l,int& value2);//��������� ������ � ������ ���������� ������������� �������
void insert_row(int**& arr, int& k, const int l,int index2);	//��������� ������ � ��������� ������������ ������ �� �������
void pop_row_back(int**& arr, int& k, const int l);	//������� ������ � ����� ���
void pop_row_front(int**& arr, int& k, const int l);	//������� ������ � ������ ���
void erase_row(int**& arr, int& k, const int l,int index); //������� ������ �� ���������� �������
void push_col_back(int** arr, const int k, int& l);	//��������� ������� � ����� ���
void push_col_front(int** arr, const int k, int& l, int value3);//��������� ������� � ������ ���
void insert_col(int** arr, const int k, int& l, int value1, int index1);	//��������� ������� �� ���������� �������
void pop_col_back(int** arr, const int k, int& l); 	//������� ������� � ����� ���
void pop_col_front(int** arr, const int k, int& l); //������� ������� � ������ ���
void erase_col(int** arr, const int k, int& l, int index4);	//������� ������� �� ���������� �������

//void Print(int arr[], const int n);
//void insert(int*& arr, int& n, int value, int index);	//��������� �������� � ������ �� ���������� �������
//void pop_back(int*& arr, int& n); //������� �������� � ����� �������
//void pop_front(int*& arr, int& n);//������� �������� � ������ �������
//void erase(int*& arr, int& n, int index);//������� �������� �� �������

#define Probel /**********************************************************/;

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
	
	int** arr= Allocate(k,l);
	
	FillRand(arr, k, l);
	Print(arr, k, l);
	cout << "\n";
	Probel;
	FillRand(arr, k, l);

	/*cout << "\n";
	Probel;
	cout << "��������� ������ � ����� ����������� �������: " << "\n";
	push_row_back(arr, k, l);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������ � ������ ����������� �������: " << "\n";
	int value2;
	cout << "������� ����������� ��������: " << "\n"; cin >> value2;
	push_row_front(arr, k, l,value2);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������ �� ������� �  ���������� ������: " << "\n";
	int index2;
	cout << "������� ������: " << "\n"; cin >> index2;
	insert_row(arr, k,  l, index2);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������ � ����� ����������� ������������� ������� : " << "\n";
	pop_row_back(arr, k, l);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������ � ������ ����������� ������������� ������� : " << "\n";
	pop_row_front(arr, k, l);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������ �� ������� ����������� ������������� �������: " << "\n";
	int index;
	cout << "������� ������: " << "\n"; cin >> index;
	erase_row(arr, k, l, index);
	Print(arr, k, l);*/

	cout << "\n";
	Probel;
	cout << "��������� ������� � ����� ����������� �������: " << "\n";
	push_col_back(arr, k, l);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������� � ������ ����������� �������: " << "\n";
	int value3;
	cout << "������� ����������� ��������: " << "\n"; cin >> value3;
	push_col_front(arr, k, l, value3);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "��������� ������� ����������� ������� �� �������: " << "\n";
	int value1;
	int index1;
	cout << "������� ������: " << "\n"; cin >> index1;
	cout << "������� ����������� ��������: " << "\n"; cin >> value1;
	insert_col(arr, k, l, value1,index1);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "������� ������� � ����� ����������� �������: " << "\n";
	pop_col_back(arr, k, l);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "������� ������� � ������ ����������� �������: " << "\n";
	pop_col_front(arr, k, l);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "������� ������� ����������� ������� �� �������: " << "\n";
	int index4;
	cout << "������� ������: " << "\n"; cin >> index4;
	erase_col(arr, k, l,  index4);
	Print(arr, k, l);

	Clear(arr, k);
}



/*

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

int** Allocate(const int k, const int l)
{
	//1 ������� ������ ����������
	int** arr = new int* [k];
	//2 �������� ������ ��� ����� ���������� �������������  �������
	for (int i = 0; i < k; i++)
	{
		arr[i] = new int[l];
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

void Print(int** arr, const int k, const int l)
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

void Clear(int** arr, const int k)
{
	for (int i = 0; i < k; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

void push_row_back(int**& arr, int& k, const int l)

{
	int** buffer = new int* [k+1];//������� ��������� ������ ����������
	
	for (int i = 0; i < k; i++)//�������� ������ ����� ��������� ������� � ��������
	{
		buffer[i] = arr[i];
	}
	delete [] arr; //������� �������� ������ ����������
	arr = buffer;//������ ��� ����� ������
	buffer[k] = new int[l] {}; //�������� ������
	//����� ��������� ������ � ������ ��� �� ��� ����� ����������� �� 1
	k++;
}

void FillRand1(int arr[], const int l, int maxRand, int minRand)
{
	for (int i = 0; i < l; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void push_row_front(int**& arr, int& k, const int l, int& value2)
{
	int** buffer = new int*[k++]{};
	buffer[0] = new int[l];
	for (int i = 0; i < l; i++)
	{
		buffer[i + 1] = arr[i];
	}
	
	delete[] arr;
	
	for (int i = 0; i < k; i++)
	{
		buffer[0][i] = value2; //�������� ������
	}
	arr = buffer;//������ ��� ����� ������
	
	//����� ��������� ������ � ������ ��� �� ��� ����� ����������� �� 1
	k++;
}

void insert_row(int**& arr, int& k, const int l, int index2)
{ 
	if (index2 > k)return;
	int** buffer = new int* [k + 1];
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
	arr[index2] = new int[l]{};
	//for (int i = 0; i < k; i++)
	//{
		//arr[index][i] = new int [l] {}; //�������� ������
	//}
	
	//����� ��������� ������ � ������ ��� �� ��� ����� ����������� �� 1
	k++;
}

void pop_row_back(int**& arr, int& k, const int l)
{
	int** buffer = new int* [--k];//������� ��������� ������ ����������
	for (int i = 0; i < k; i++)//�������� ������ ����� ��������� ������� � ��������
	{
		buffer[i] = arr[i];
	}
	delete[] arr[k]; //������� ��������� ������ �� ������
	delete[] arr;//������� ������ ����������
	arr = buffer;//��������� �� ����� ������ ���������� 
}

void pop_row_front(int**& arr, int& k, const int l)
{
	
	int** buffer = new int*[k-1];
	
	for (int i = 0; i < k; i++)
	{
		buffer[i] = arr[i + 1];
	}
	delete[]arr;
	arr = buffer;
	k--;
}

void erase_row(int**& arr, int& k, const int l, int index)
{
	
   int** buffer = new  int*[k-1];
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

void push_col_back(int** arr, const int k, int & l)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		int* buffer = new int[l + 1]{};

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

void push_col_front(int** arr, const int k, int& l, int value3)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		int* buffer = new int[l + 1]{};

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

void insert_col(int** arr, const int k, int& l, int value1, int index1)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		int* buffer = new int[l + 1]{};

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

void pop_col_back(int** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		int* buffer = new int[l - 1]{};

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

void pop_col_front(int** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		int* buffer = new int[l - 1]{};

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

void erase_col(int** arr, const int k, int& l, int index4)
{
	for (int i = 0; i < k; i++)
	{//������� �������� ������ ������� �������
		int* buffer = new int[l - 1]{};

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
	

	
			
			
