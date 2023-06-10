// Лабораторная работа 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float x;
    setlocale(LC_ALL, "RUS");

    cout << "Введите значение аргумента функции: ";
    cin >> x;

    double Sum = 0,q = x, esp = 0.0001f;
    int n = 1, sign = 1;

    while (true)
    {
        if (n % 2 != 0)
        {
            q = q * sign;
            Sum += q;
            sign = -sign;
        }
        n++;
        q = q * x / n;
        

        if (q < esp)
            break;

    }
    cout << "\nСумма ряда = " << Sum << "\n" << "Значение sin(x)" << sin(x) << "\n";

    system("pause");
    return(0);
}


