#pragma once
#include <string>

using namespace std;

class CAutomobile
{
public:
	CAutomobile();//�����������
	

	string color, model, privod, dvigatel;
	int probeg, newcost, curcost, maxspeed, fuel_usingkm, fuel_remain, interval;
	double shirota, dolgota;//C������a

	//������
	bool Doedet(int rast);
	double Rasst(double x, double y);
	int Price(int price_fuel);
	int Poterya();
	double Time();


	~CAutomobile();//����������

};

