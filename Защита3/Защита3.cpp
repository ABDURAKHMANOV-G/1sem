// Защита Лаба3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    
   for (int k = 0; k <= 5; k += 5 )
    {
        for (int i = 1; i < 13; i++)
        {
            for (int j = 2 + k; j < 8 + k; j++)
            {    
                printf("%2i*%2i=%3d ", i, j, i * j);
            }
            cout << endl;
        }
        cout << endl;
    }
    

    system("PAUSE");
    return(0);

}
 
