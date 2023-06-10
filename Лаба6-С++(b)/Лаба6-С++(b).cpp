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

//C++ & text
int main()
{
	setlocale(LC_ALL, "RUS");

	ifstream in;
	in.open(FNAME, ios_base::binary);

	int N = 10;
	vector <string> allfile; //Одномерный безразмерный массив для всех элементов файла
	//Откроем файл на текстовое чтение и проверим открывается ли он
	if (!in.is_open())
	{
		printf("\nФайл не найден1");
		return 0;
	}
	else
	{
		cout << "Успешно открыто\n";
		string str;
		while (!in.eof()) // читаем файл
		{
			//fgets(str2, 140, in); // пробегаемся построчно по файлу
			str = "";
			getline(in, str);
			regex re("\\b\\d+\\b");
			auto words_begin = sregex_iterator(str.begin(), str.end(), re);
			auto words_end = sregex_iterator();
			for (sregex_iterator it = words_begin; it != words_end; ++it)
			{
				cout << it->str() << ' ';
				allfile.push_back(it->str());
			}
			cout << endl;
		}
	}

	in.close();

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

	ofstream out;
	//Откроем файл на текстовое чтение и проверим открывается ли он
	out.open(FNAME1, ios_base::binary);
	if (!out.is_open())
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
				out.write((char*)&resmass[i][j], sizeof(char)) ;
			}
			out << endl;


			out << "...*...*...*...*...*...*...*...*...*...*...*\n";

		}
	}
	out.close();

	system("pause");
	return 0;
}
