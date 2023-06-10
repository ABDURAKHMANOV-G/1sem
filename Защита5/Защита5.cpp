// Защита5.cpp : Объявить два целочисленных массива разного размера и написать функцию,
// которая заполняет их элементы случайными значениями и выводит на экран. 
// Функция должна возвращать среднее значение по всем элементам полученного массива.
//

#include <iostream>
#include <locale>
#include <ctime>

using namespace std;

int N = 5, M = 10;

double srznach(int *m, int N)
{
	srand(time(0));
	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		m[i] = -5 + rand() % 11;	
		cout << m[i] << ",";
		sum += m[i];
	}

	cout << endl;
	cout.precision(3);

	return(fixed, sum / (double(N)));
}

int main()
{
	setlocale(LC_ALL, "RUS");

	int massN[5];
	int massM[10];

	cout << "Первый массив: " << srznach(massN, N) << endl;

	cout << "Второй массив: " << srznach(massM, M) << endl;

	system("PAUSE");
	return(0);
}


