#include <iostream>
using namespace std;
#define tab "\t"
class Point //тип данных поинт
{

	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}

	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}

	void set_y(double y)
	{
		this->y = y;
	}
	//Constructor
	Point()
	{
		x = y = 0;
		cout << "Constructor:\t" << this << endl;
	}
	//Metods
	void print()const
	{
    cout << "Destructor:\t" << this << endl;
	}

};

//#define STRUCT

void main()
{
	setlocale(LC_ALL, " ");
//type name
#ifdef STRUCT
	int a; //объ€вл€ем переменную а типа int
	Point A;// обь€вл€ем переменную A типа Point
			//объ€вл€ем объект структуры point или создаем экземпл€рструктуры Point
	A.x = 2;
	A.y = 3;
	cout << A.x << tab << A.y << endl;

	Point* pA = &A; //создаем указатель на point
	cout << pA->x << tab << pA->y << endl;
#endif // STRUCT
	Point A;
	A.set_x(2);
	A.set_x(3);
	cout << A.get_x() << tab << A.get_y() << endl;
	A . print();
	Point B(2, 3);
}