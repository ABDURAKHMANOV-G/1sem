#pragma once
class CPoint
{
public:
	CPoint();//����������� �� ���������

	CPoint(int x, int y, int z);

	//��������
	int m_ix;
	int m_iy;
	int m_iz;

	//������
	float Distance2point(CPoint second);
	float Distance_to_0();
	float Distance2near(int sx, int sy, int sz);

	~CPoint();//����������

};

