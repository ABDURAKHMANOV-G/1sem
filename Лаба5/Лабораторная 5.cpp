// Лабораторная 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <iomanip>

#define PI 4*atan(1)

//#define One
#define Two
//#define Three

float one(float A, float R);
void two(float x, float y, int& res);
bool three(float x, double& Sum);

using namespace std;

// 1lab
float one(float A, float R)
{
    float lend = (PI * R) / 180 * A;

    return lend;
}
// 2lab
void two(float x, float y, int& res)
{
    
    float R = sqrt(x * x + y * y);
    //int res = -1;

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

    //return res;
}
// 3lab
bool three(float x, double& Sum)
{
    double q = x, esp = 0.0001f;
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
            return true;
        
    }
}

int main()
{
    setlocale(LC_ALL, "RUS");

#ifdef One
    float r, a;

    cout << "Введите радиус дуги:";
    cin >> r;
    cout << "Введите угловой размер дуги:";
    cin >> a;


    float lendug = one(r, a);
    cout.precision(3);

    cout << fixed << "Длина дуги радиусом " << r << " и углом " << a << " = " << lendug << "мм" << endl;

#endif // One

#ifdef Two
    float x, y;
    int res;
    cout << "Введите значения X и Y через пробел:\n";
    cin >> x >> y;
    two(x, y, res);
    cout << "\nЗона номер:" << res << "\n";


#endif // Two

#ifdef Three
    float a;

    cout << "Введите значение аргумента функции: ";
    cin >> a;
    
    double res = 0;

    if (three(a, res))
        cout << "\nСумма ряда = " << res << "\n" << "Значение sin(x)" << sin(a) << "\n";

#endif // Three

    system("pause");
    return 0;
}





