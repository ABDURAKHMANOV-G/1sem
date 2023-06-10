// Лабораторная 4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
   
    int N;
    cin >> N;

    int** mass = new int* [N];

    for (int i = 0; i < N; i++)
    {
        mass[i] = new int[N];
    }

    srand(time(0));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            mass[i][j] = -30 + rand() % 61;
        }
    }
    //ВЫВОД МАССИВА
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mass[i][j] < 0)
                cout << mass[i][j] << " ";
            else
                cout << mass[i][j] << "  ";
        }
        cout << endl;
    }
    //ВЫВОД МАССИВА ЗАКОНЧЕН

    int max = -1 * pow(10, 6);
    int min = pow(10, 6);
    int maxi = 0, maxj = 0;
    int mini = 0, minj = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mass[i][j] > max)
            {
                max = mass[i][j];
                maxi = i, maxj = j;

            }
            else if (mass[i][j] < min)
            {
                min = mass[i][j];
                mini = i, minj = j;
         
            }
        }
    }
    mass[mini][minj] = max;
    mass[maxi][maxj] = min;
    
    
    //*pmin = max;
    //ВЫВОД НОВОГО МАССИВА
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mass[i][j] < 0)
                cout << mass[i][j] << " ";
            else
                cout << mass[i][j] << "  ";
        }
        cout << endl;
    }
    //ВЫВОД НОВОГО МАССИВА ЗАКОНЧЕН
    cout << max << min;
    delete[] mass;

    system("Pause");
    return(0);
}

