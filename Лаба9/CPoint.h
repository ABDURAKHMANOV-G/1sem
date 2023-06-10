#pragma once
class CPoint
{
public:
	CPoint();//Конструктор по умолчанию

	CPoint(int x, int y, int z);

	//Свойства
	int m_ix;
	int m_iy;
	int m_iz;

	//Методы
	float Distance2point(CPoint second);
	float Distance_to_0();
	float Distance2near(int sx, int sy, int sz);

	~CPoint();//Деструктор

};

