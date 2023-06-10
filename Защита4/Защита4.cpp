// Защита4.cpp : Определить число, которое встречается в одномерном массиве размером N элементов наибольшее количество раз
//

#include <iostream>
#include <locale>
#include <ctime>

using namespace std;
int N;
int m = 0;
int a;
int maxx = 0;

int main()
{
    setlocale(LC_ALL, "RUS");

    
    cout << "Введите размер массива: ";
    //cin >> N;
    //int* mass = new int[N];
    srand(time(0));
    /*for (int i = 0; i < N; i++)
    {
        mass[i] = rand() % 15; 
    }*/
    int mass[] = { 4, 4, 4, 5, 5, 5 };
    int N = 6;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mass[i] == mass[j])
            {
            m += 1;
            }
            if (m > maxx)
            {
                maxx = m;
                a = mass[i];
            }
        }
        m = 0;
    }

    for (int j = 0; j < N; j++)
        cout << mass[j] << ",";
    //if (N == 0)
      //  cout << endl << "Чисел нет вовсе!" << endl;
    //if (N == 1)
        //cout << endl << "Единственное встречающееся число: " << a << endl;
    if (maxx == 1)
        cout << endl << "Все элементы встречаются по одному разу!" << endl;
    
    else
        cout << endl << "Число встречается " << maxx << " раз(a)!" << " Число, которое встречается максимальное количство раз: " << a << endl;
    
    //delete[] mass;

    system("PAUSE");
    return(0);
}


