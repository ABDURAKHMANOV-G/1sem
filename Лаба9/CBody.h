#pragma once
class CBody
{
public:
	//������������ ������
	CBody();//�� ���������
	CBody(float x, float m);//� �����������


	//�������� ������
	float m_fCoord;
	float m_fMass;
	
	//int GetValue(); ������
	//int SetValue();
	
	//������ ������
	float Dist(CBody b); //� CBody b ��������� ���, ��� ��������� � ������ CBody

	CBody operator +(CBody b);

private:
	//int m_iValue;
protected:

};

