//1.Разработать класс «Точка в трехмерном пространстве». 
//Предусмотреть необходимые свойства и реализовать методы 
//вычисления расстояния до другой точки, до начала координат, 
//нахождения ближайшей точки из заданных, нахождения сферических и 
//цилиндрических координат этой точки. Написать приложение для тестирования работы методов и свойств. 

#include <iostream>
#include <cmath>
#include "CPoint.h"

using namespace std;
int x, y, z, x2, y2, z2, xn2, yn2, zn2, xn3, yn3, zn3;


int main()
{
	cout << "Enterr coordinates of first point: ";
	cin >> x >> y >> z;
	cout << "Enter coordinates of second point: ";
	cin >> x2 >> y2 >> z2;
	cout << "Enter coordinates of second near point: ";
	cin >> xn2 >> yn2 >> zn2;
	cout << "Enter coordinates of third near point: ";
	cin >> xn3 >> yn3 >> zn3;

	CPoint first_p(x, y, z), second_p(x2, y2, z2), secod_n(xn2, yn2, zn2), third_n(xn3, yn3, zn3);

	cout << "Distance to point: " << first_p.Distance2point(second_p) << endl;
	cout << "Distance to zero: " << first_p.Distance_to_0() << endl;
	cout << "Distance to nearest point: " << first_p.Distance2near(secod_n, third_n) << endl;
	first_p.Cilindr_coor();
	cout << endl;
	first_p.Sphere_coor();

	return(0);
	system("pause");
}
