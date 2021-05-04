#include<iostream>
using namespace std;

//void FillRand(int arr1[], const int n);
int** Allocate(const int k, const int l);	//Выделяет память под динамический массив
void FillRand(int** arr, const int k, const int l);
void Print(int** arr, const int k, const int l);//выводит двухмерный динамическийй массив
void Clear(int** arr, const int k);		//Удаляет динамический массив
void push_row_back(int**& arr,  int& k, const int l);	//Добавляет строку в конец двумерного динамического массива
void FillRand1(int arr[], const int l, int maxRand, int minRand);//случайные числа в строку
void push_row_front(int**& arr, int& k, const int l,int& value2);//Добавляет строку в начало двумерного динамического массива
void insert_row(int**& arr, int& k, const int l,int index2);	//Вставляет строку в двумерный динамический массив по индексу
void pop_row_back(int**& arr, int& k, const int l);	//Удаляет строку с конца ДДМ
void pop_row_front(int**& arr, int& k, const int l);	//Удаляет строку с начала ДДМ
void erase_row(int**& arr, int& k, const int l,int index); //Удаляет строку по указанному индексу
void push_col_back(int** arr, const int k, int& l);	//Добавляет столбец в конец ДДМ
void push_col_front(int** arr, const int k, int& l, int value3);//Добавляет столбец в начало ДДМ
void insert_col(int** arr, const int k, int& l, int value1, int index1);	//Вставляет столбец по указанному индексу
void pop_col_back(int** arr, const int k, int& l); 	//Удаляет столбец в конец ДДМ
void pop_col_front(int** arr, const int k, int& l); //Удаляет столбец в начало ДДМ
void erase_col(int** arr, const int k, int& l, int index4);	//Удаляет столбец по указанному индексу

//void Print(int arr[], const int n);
//void insert(int*& arr, int& n, int value, int index);	//Вставляет значение в массив по указанному индексу
//void pop_back(int*& arr, int& n); //удаляет значение в конце массива
//void pop_front(int*& arr, int& n);//удаляет значение в начале массива
//void erase(int*& arr, int& n, int index);//удаляет значение по индексу

#define Probel /**********************************************************/;

void main()
{
	setlocale(LC_ALL, "Russian");
	/*int n; //размер массива
	cout << "Введите размер массива: ";  cin >> n;

	int* arr1 = new int [n] {};//объявили динамический массив
	FillRand(arr, n);
	Print(arr, n);
	int value;
	cout << "введите добавляемое значение: "; cin >> value;
	//1 выделить блок памяти нужного размера  и создаем буферный массив нужногоразмера
	int* buffer = new int[n + 1]{};
	//2 копируем изменения из исходного массива в буферный
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];
	}
	//3 удаляем исходный массив
	delete[] arr;
	//4 подменяем адрес старого массива адресом нового массива
	arr = buffer;
	//записываем значение в конец массива
	arr[n] = value;
	//6 после добавления размер массива увеличивается на 1
	n++;
	Print(arr, n);

	int index;
	cout << "введите добавляемое значение: "; cin >> value;
	cout << "введите index: "; cin >> index;
	insert(arr, n, value, index);
	Print(arr, n);

	cout << "удалили последнее значение массива: "<<"\n";
	pop_back(arr, n);
	Print(arr, n);

	cout << "удалили первое значение массива: " << "\n";
	pop_front(arr, n);
	Print(arr, n);


	cout << "введите index: "; cin >> index;
	cout << "удалили  значение массива по индексу: " << "\n";
	erase(arr, n, index);
	Print(arr, n);

	delete [] arr;
	*/

	int k; //кол-во строк
	int l; //кол-во столбцов (элементы строки)
	cout << "введите кол-во строк динамического массива: " << "\n"; cin >> k;
	cout << "введите кол-во солбцов динамического массива: " << "\n"; cin >> l;
	//1 создаем массив указателей
	
	int** arr= Allocate(k,l);
	
	FillRand(arr, k, l);
	Print(arr, k, l);
	cout << "\n";
	Probel;
	FillRand(arr, k, l);

	/*cout << "\n";
	Probel;
	cout << "Добавляем строку в конец двухмерного массива: " << "\n";
	push_row_back(arr, k, l);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "Добавляем строку в начало двухмерного массива: " << "\n";
	int value2;
	cout << "введите добавляемое значение: " << "\n"; cin >> value2;
	push_row_front(arr, k, l,value2);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "Добавляем строку по индексу в  двухмерный массив: " << "\n";
	int index2;
	cout << "введите индекс: " << "\n"; cin >> index2;
	insert_row(arr, k,  l, index2);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "удаляем строку в конце двухмерного динамического массива : " << "\n";
	pop_row_back(arr, k, l);
	//FillRand1(arr[k-1], l,0,50);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "удаляем строку в начале двухмерного динамического массива : " << "\n";
	pop_row_front(arr, k, l);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "удаляем строку по индексу двухмерного динамического массива: " << "\n";
	int index;
	cout << "введите индекс: " << "\n"; cin >> index;
	erase_row(arr, k, l, index);
	Print(arr, k, l);*/

	cout << "\n";
	Probel;
	cout << "Добавляем столбец в конец двухмерного массива: " << "\n";
	push_col_back(arr, k, l);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "Добавляем столбец в начало двухмерного массива: " << "\n";
	int value3;
	cout << "введите добавляемое значение: " << "\n"; cin >> value3;
	push_col_front(arr, k, l, value3);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "Добавляем столбец двухмерного массива по индексу: " << "\n";
	int value1;
	int index1;
	cout << "введите индекс: " << "\n"; cin >> index1;
	cout << "введите добавляемое значение: " << "\n"; cin >> value1;
	insert_col(arr, k, l, value1,index1);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "удаляем столбец в конце двухмерного массива: " << "\n";
	pop_col_back(arr, k, l);
	Print(arr, k, l);

	cout << "\n";
	Probel;
	cout << "удаляем столбец в начале двухмерного массива: " << "\n";
	pop_col_front(arr, k, l);
	Print(arr, k, l);
	
	cout << "\n";
	Probel;
	cout << "удаляем столбец двухмерного массива по индексу: " << "\n";
	int index4;
	cout << "введите индекс: " << "\n"; cin >> index4;
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
	//for (int i = 0; i < n; i++) альтернативой 2 форам можно сделать операцию тернарником
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
	int* buffer = new int[--n];//буферный массив на 1 меньше заданного 
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
	//1 создаем массив указателей
	int** arr = new int* [k];
	//2 выделяем память для строк двумерного динамического  массива
	for (int i = 0; i < k; i++)
	{
		arr[i] = new int[l];
	}

	return arr;
}


void FillRand(int** arr, const int k, const int l)
{
	//3 работа с динамическим двумерным массивом
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
	int** buffer = new int* [k+1];//создали буфферный массив указателей
	
	for (int i = 0; i < k; i++)//копируем адреса строк исходного массива в буферный
	{
		buffer[i] = arr[i];
	}
	delete [] arr; //удаляем исходный массив указателей
	arr = buffer;//буффер это новый массив
	buffer[k] = new int[l] {}; //добавили строку
	//после добавленя строки в массив кол во его строк увеличиваем на 1
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
		buffer[0][i] = value2; //добавили строку
	}
	arr = buffer;//буффер это новый массив
	
	//после добавленя строки в массив кол во его строк увеличиваем на 1
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

	arr = buffer;//буффер это новый массив
	arr[index2] = new int[l]{};
	//for (int i = 0; i < k; i++)
	//{
		//arr[index][i] = new int [l] {}; //добавили строку
	//}
	
	//после добавленя строки в массив кол во его строк увеличиваем на 1
	k++;
}

void pop_row_back(int**& arr, int& k, const int l)
{
	int** buffer = new int* [--k];//создали буфферный массив указателей
	for (int i = 0; i < k; i++)//копируем адреса строк исходного массива в буферный
	{
		buffer[i] = arr[i];
	}
	delete[] arr[k]; //удаляем последнюю строку из памяти
	delete[] arr;//удаляем массив указателей
	arr = buffer;//подменяем на новый массив указателей 
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
	{//создаем буферную строку нужного размера
		int* buffer = new int[l + 1]{};

		// копируем исходные строки в буффер
		for (int j = 0; j < l; j++)
		{

			buffer[j] = arr[i][j];
		}
	delete[] arr[i]; //удаляем исходную строку
	arr[i] = buffer;
		//добавили столбик
	}
	l++;
}

void push_col_front(int** arr, const int k, int& l, int value3)
{
	for (int i = 0; i < k; i++)
	{//создаем буферную строку нужного размера
		int* buffer = new int[l + 1]{};

		// копируем исходные строки в буффер
		for (int j = 0; j < l; j++)
		{
			(j > 0) ? buffer[j] = arr[i][j-1] : buffer[j] = value3;
			
		}
		delete[] arr[i]; //удаляем исходную строку
		arr[i] = buffer;
		//добавили столбик
	}
	l++;
}

void insert_col(int** arr, const int k, int& l, int value1, int index1)
{
	for (int i = 0; i < k; i++)
	{//создаем буферную строку нужного размера
		int* buffer = new int[l + 1]{};

		// копируем исходные строки в буффер
		for (int j = 0; j < l; j++)
		{
			if (j > index1)  buffer[j] = arr[i][j - 1];
			if (j==index1)  buffer[j] = value1;
			if (j < index1) buffer[j] = arr[i][j];

		}
		delete[] arr[i]; //удаляем исходную строку
		arr[i] = buffer;
		//добавили столбик
	}
	l++;
}

void pop_col_back(int** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//создаем буферную строку нужного размера
		int* buffer = new int[l - 1]{};

		// копируем исходные строки в буффер
		for (int j = 0; j < l-1; j++)
		{

			buffer[j] = arr[i][j];
		}
		delete[] arr[i]; //удаляем исходную строку
		arr[i] = buffer;
		//удалили столбик
	}
	l--;
}

void pop_col_front(int** arr, const int k, int& l)
{
	for (int i = 0; i < k; i++)
	{//создаем буферную строку нужного размера
		int* buffer = new int[l - 1]{};

		// копируем исходные строки в буффер
		for (int j = 0; j < l; j++)
		{
			if (j > 0)  buffer[j-1] = arr[i][j];
			
		}
		delete[] arr[i]; //удаляем исходную строку
		arr[i] = buffer;
		//удалили столбик
	}
	l--;

}

void erase_col(int** arr, const int k, int& l, int index4)
{
	for (int i = 0; i < k; i++)
	{//создаем буферную строку нужного размера
		int* buffer = new int[l - 1]{};

		// копируем исходные строки в буффер
		for (int j = 0; j < l; j++)
		{
			if (j > index4)  buffer[j-1] = arr[i][j];
			if (j < index4) buffer[j] = arr[i][j];

		}
		delete[] arr[i]; //удаляем исходную строку
		arr[i] = buffer;
		//добавили столбик
	}
	l--;
}
	

	
			
			
