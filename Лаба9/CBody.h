#pragma once
class CBody
{
public:
	//Конструкторы класса
	CBody();//По умолчанию
	CBody(float x, float m);//С параметрами


	//Свойства класса
	float m_fCoord;
	float m_fMass;
	
	//int GetValue(); защита
	//int SetValue();
	
	//Методы класса
	float Dist(CBody b); //В CBody b находится все, что находится в классе CBody

	CBody operator +(CBody b);

private:
	//int m_iValue;
protected:

};

