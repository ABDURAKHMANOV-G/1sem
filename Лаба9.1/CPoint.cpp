#include "CPoint.h"
#include <cmath>
#include <iostream>

using namespace std;

CPoint::CPoint() {};


CPoint::CPoint(int x, int y, int z)
{
	m_ix = x;
	m_iy = y;
	m_iz = z;
}

float CPoint::Distance2point(CPoint second)
{
	return sqrt(pow(m_ix - second.m_ix, 2) + pow(m_iy - second.m_iy, 2) + pow(m_iz - second.m_iz, 2));
}

float CPoint::Distance_to_0()
{
	Distance2point(CPoint(0,0,0));
}

float CPoint::Distance2near(CPoint second, CPoint third)
{
	if (Distance2point(second) < Distance2point(third))
		return Distance2point(second);
	return Distance2point(third);
}

void CPoint::Cilindr_coor()
{
	 float p = sqrt( pow(m_ix, 2) + pow(m_iy, 2) );
	 float fi = atan(m_iy / m_ix);
	 float cil_x = p * cos(fi);
	 float cil_y = p * sin(fi);
	 float cil_z = m_iz;

	 cout << "Cilinder x = " << cil_x << " Cilinder y = " << cil_y << " Cilinder z = " << cil_z;
}

void CPoint::Sphere_coor()
{
	float r = sqrt(pow(m_ix, 2) + pow(m_iy, 2) + pow(m_iz, 2));
	float omega = acos(m_iz / r);
	float fi = atan(m_iy / m_ix);
	float sph_x = r * sin(omega) * cos(fi);
	float sph_y = r * sin(omega) * sin(fi);
	float sph_z = r * cos(omega);

	cout << "Spher x = " << sph_x << " Sphere y = " << sph_y << " Sphere z = " << sph_z;
}



CPoint::~CPoint(){}