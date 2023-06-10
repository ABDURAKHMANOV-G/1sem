// Защита 2лабы.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.



#include <iostream>
#include <locale>

using namespace std;

int main()
{
	float x, y, z;

	setlocale(LC_ALL, "RUS");
	cout << "Введите координаты Х , Y , Z\n";
	cin >> x >> y >> z;
	float R = sqrt(x * x + y * y + z * z);// длина вектора
	float cosa = (x + y + z) / (sqrt(3) * R );//находим косинус угла между вектором R и единичным вектором по формуле
	float sina = sqrt(1 - cosa * cosa);//преобразуем в синус по основному тригонометрическому тождеству
	if (R <= 1)
		cout << "Точка находится внутри сферы\n";
	else if ((sina * R) <= 0.25 || (x == 0 && y == 0 && z == 0))
		cout << "Точка находится внутри цилиндра\n";
	else
		cout << "Точка находится вне всех зон\n";

	system("pause");
	return 0;
}

