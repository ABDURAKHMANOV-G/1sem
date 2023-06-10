#include "CAutomobile.h"
#include <iostream>
#include <string>
#include <cmath>


#define rad 3.14/180
	
using namespace std;
double rastoyan;

CAutomobile::CAutomobile()
{
}


bool CAutomobile::Doedet(int rast)
{
	if ((rast * fuel_usingkm) < fuel_remain)
		return true;
	return false;

}

double CAutomobile::Rasst(double x, double y)
{
	rastoyan =  (atan2(sqrt( pow((cos(x*rad) * sin(y * rad - dolgota * rad)),2) + pow( ((cos(shirota*rad)*sin(x*rad)) - sin(shirota*rad)*cos(x*rad)* cos(y * rad - dolgota * rad) ), 2)) , ((sin(shirota * rad) * sin(x * rad)) + (cos(shirota * rad) * cos(x * rad) * cos(y * rad - dolgota * rad))))*10000);
	return rastoyan;
}

int CAutomobile::Price(int price_fuel)
{
	return ((rastoyan * fuel_usingkm) - fuel_remain)*price_fuel;
}

int CAutomobile::Poterya()
{
	return(newcost - curcost);
}

double CAutomobile::Time()
{
	return rastoyan/maxspeed;
}



CAutomobile::~CAutomobile(){}
