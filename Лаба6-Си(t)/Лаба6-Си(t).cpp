// Лаба6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

//Считать из файла «data.dat» массив 10x10 элементов. 
//Произвести с ним действия указанные в таблице ниже в соответствии со своим вариантом. 
//Записать результирующий массив в файл «result.res». 
//Решить задачу, используя текстовый и бинарный режимы работы с файлами, а также функции С и С++.
//(должны быть варианты кода С-бинарный, С-текстовый, С++-бинарный, С++- текстовый). 
//Форматы входного и выходного файлов взять из таблицы.

#define _CRT_SECURE_NO_WARNINGS
#include <time.h> 
#include <iostream> 
#include <fstream>
#include <locale>
#include <vector>
#include <regex>


#define FNAME "D:\\data.txt" 
#define FNAME1 "D:\\result.txt" 
using namespace std;
int numb[958];

//C & text
int main()
{
	setlocale(LC_ALL, "RUS");

	FILE* in;
	int N = 10;
	vector <string> allfile; //Одномерный безразмерный массив для всех элементов файла
	//Откроем файл на текстовое чтение и проверим открывается ли он
	if (fopen_s(&in, FNAME, "rt"))
	{
		printf("\nФайл не найден");
		return 0;
	}
	else
	{
		cout << "Успешно открыто\n";
		char str2[100];
		while (!feof(in)) // читаем файл
		{
			fgets(str2, 140, in); // пробегаемся построчно по файлу
			regex re("\\b\\d+\\b");
			string str = string(str2);
			auto words_begin = sregex_iterator(str.begin(), str.end(), re);
			auto words_end = sregex_iterator();
			for (sregex_iterator it = words_begin; it != words_end; ++it)
			{
				//cout << it->str() << ' ';
				allfile.push_back(it->str());
			}
			//cout << endl;
		}
	}

	fclose(in);

	// отправим в двумерный массив элементы вектора
	vector <int> intbuff; // одномерный вектор, в котором будем хранить все элементы из вектора в int

	//cout << strbuff.size() << endl;
	for (string item : allfile)
	{
		//cout << item << endl; 
		intbuff.push_back(stoi(item)); // переведем str to int
	}

	int mass[10][10];
	int k = 0;


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			mass[i][j] = intbuff[k];
			k++;
		}
	}

	cout << endl;
	// вывод массива
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int resmass[10][10];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N + 1; j++)
		{
			if (i == 9 - j)
			{
				mass[9 - j][0 + j] = mass[9][j] * mass[j][0];
			}


			//cout << mass[9][j] * mass[j][0] << " ";
			resmass[i][j] = mass[i][j];
		}
	}
	cout << endl;
	// вывод массива
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << resmass[i][j] << " ";
		}
		cout << endl;
	}

	FILE* out;
	//Откроем файл на текстовое чтение и проверим открывается ли он
	if (fopen_s(&out, FNAME1, "wt"))
	{
		printf("\nФайл не найден");
		return 0;
	}
	else
	{//Запись в результирующий файл
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				fprintf(out, "%i ", resmass[i][j]);
			}
			fprintf(out, "\n");


			fprintf(out, "...*...*...*...*...*...*...*...*...*...*...*\n");

		}
	}
	fclose(out);

	system("pause");
	return 0;
}
