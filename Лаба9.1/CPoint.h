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

	/*float p, fi, cil_x, cil_y, cil_z;
	
	float r, omega, sph_x, sph_y, sph_z*/;


	//Методы
	float Distance2point(CPoint second);
	float Distance_to_0();
	float Distance2near(CPoint second, CPoint third);
	void Cilindr_coor();
	void Sphere_coor();



	~CPoint();//Деструктор

};

