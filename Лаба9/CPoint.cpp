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
	return sqrt( pow(m_ix, 2) + pow(m_iy, 2) + pow(m_iz, 2) );
}

float CPoint::Distance2near(int sx, int sy, int sz)
{
	return 0.0f;
}

CPoint::~CPoint(){}