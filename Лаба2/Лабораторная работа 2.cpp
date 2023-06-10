// Лабораторная работа 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>

using namespace std;

int main()
{
    float x, y;
    setlocale(LC_ALL, "RUS");
    cout << "Введите значения X и Y через пробел:\n";
    cin >> x >> y;

    float R = sqrt(x * x + y * y);
    int res = -1;

    // Начнем с окружности
    if (R > 2)
    {
        if (x > 0 && y > 0)
        {
            if (y < x - 2)
                res = 1;
            else if (y > x - 2 && y < sqrt(x))
                res = 2;
            else if (y > sqrt(x) && y < x * x)
                res = 3;
            else
                res = 4;
        }
        if (x < 0 && y > 0)
        {
            if (y > x * x)
                res = 5;
            else
                res = 6;
        }
        if (x < 0 && y < 0)
        {
            if (y > x - 2)
                res = 7;
            else
                res = 8;
        }
        if (x > 0 && y < 0)
            res = 9;
    }
    else
    {
        if (x > 0 && y > 0)
        {
            if (y < x * x && y < sqrt(x))
                res = 18;
            else if (y > x * x && y < sqrt(x))
                res = 17;
            else if (y < x * x && y > sqrt(x))
                res = 16;
            else
                res = 15;
        }
        if (x < 0 && y > 0)
        {
            if (y > x * x)
                res = 14;
            else
                res = 13;
        }
        if (x < 0 && y < 0)
            res = 12;
        if (x > 0 && y < 0)
        {
            if (y > x - 2)
                res = 11;
            else
                res = 10;
        }
    }
    //Рассмотрим границы
    //Прямая y = x - 2
    if (y == x - 2)
    {
        if (x < 0)
            res = 8;
        if (x == 0)
            res = 12;
        if (x > 0 && x < 2.f)
            res = 11;
        if (x == 2.f)
            res = 18;
        if (x > 2.f)
            res = 2;
    }
    //График y = sqrt(x)
    if (y == sqrt(x))
    {
        if (x >= 0 && x < 1)
            res = 18;
        if (x == 1)
            res = 18;
        if (x > 1 && x <= 1.562f)
            res = 18;
        if (x > 1.562f)
            res = 3;
    }
    //График Параболы y = x^2
    if (y == x * x)
    {
        if (x >= 0 && x < 1)
            res = 18;
        if (x == 1)
            res = 18;
        if (x > 1 && x <= 1.25f)
            res = 16;
        if (x > 1.25f)
            res = 4;
        if (x < 0 && x >= -1.25f)
            res = 14;
        if (x < -1.25f)
            res = 6;
    }
    //График окружности
    if (R == 2)
    {
        if (y > 0)
        {
            if (x >= -2.f && x < -1.25f)
                res = 13;
            if (x > -1.25f && x < 0)
                res = 14;
            if (x >= 0 && x < 1.25f)
                res = 15;
            if (x > 1.25f && x < 1.562f)
                res = 16;
            if (x >= 1.562f && x <= 2.f)
                res = 18;
        }
        else
        {
            if (x >= -2 && x <= 0)
                res = 12;
            if (x > 0 && x <= 2)
                res = 10;
        }
    }
    //Ось Х
    if (y == 0)
    {
        if (x < -2.f)
            res = 7;
        if (x >= -2.f && x < 0)
            res = 13;
        if (x >= 0 && x <= 2.f)
            res = 18;
        if (x > 2)
            res = 9;
    }
    //Ось Y
    if (x == 0)
    {
        if (y < -2.f)
            res = 9;
        if (y > -2.f && y < 0)
            res = 12;
        if (y > 0 && y < 2)
            res = 15;
        if (y == 0)
            res = 18;
        if (y > 2)
            res = 5;
    }
    cout << "\nЗона номер:" << res << "\n";

    system("pause");
    return(0);
}
