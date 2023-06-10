// Лабораторная работа 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

//#include <stdafx.h>
#include <iostream>
#include <locale>
#include <iomanip>

#define PI 4*atan(1)
#define C
#define Name
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");

#ifndef C
    //C++

    float r, a;

    cout << "Введите радиус дуги:";
    cin >> r;
    cout << "Введите угловой размер дугиS:";
    cin >> a;


    float lendug = (PI * r) / 180 * a;
    cout.precision(3);

    cout <<fixed << "Длина дуги радиусом " << r << " и углом " << a << " = " << lendug << "мм" << endl;
    

    system("pause");
    return 0;

//#endif

//#ifdef C

    //C

    float r, a;

    printf("Введите радиус дуги:");
    scanf_s("%f", &r);
    printf("Введите угловой размер дуги:");
    scanf_s("%f", &a);


    float lendug = (PI * r) / 180 * a;

    printf("Длина дуги радиусом%10.f",r);
    printf(" и углом%10.f ",a);
    printf(" = %10.3f\n",lendug);
    //printf("мм");

    system("pause");
    return 0;
#endif // C

//Defend
#ifdef Name

    //printf("*****           *           *****           *              *      *\n*             *   *         *             *  *            *      *\n*            *  *  *        *              *  *  *          * * * * \n*           *        *      *            *         *        *      *\n*          *          *     *****     *            *      *      *");
 


    cout << "*****" << setw(9) << '*' << setw(14) << "*****" << setw(9) << "*" << setw(9) << "*" << setw(5) << "*\n"
        << "*" << setw(11) << "*" << setw(4) << "*" << setw(8) << "*" << setw(11) << "*" << setw(4) << "*" << setw(7) << "*" << setw(5) << "*\n"
        << "*" << setw(10) << "*" << setw(3) << "*" << setw(3) << "*" << setw(7) << "*" << setw(10) << "*" << setw(3) << "*" << setw(3) << "*" << setw(11) << "*****\n"
        << "*" << setw(9) << "*" << setw(8) << "*" << setw(6) << "*" << setw(9) << "*" << setw(8) << "*" << setw(5) << "*" << setw(5) << "*\n"
        << "*" << setw(8) << "*" << setw(10) << "*" << setw(9) << "*****" << setw(4) << "*" << setw(10) << "*" << setw(4) << "*" << setw(5) << "*\n";
    system("pause");
    return 0;
#endif // Name



}



