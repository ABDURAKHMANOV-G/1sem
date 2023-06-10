// Лаба9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
#include "CBody.h"
#include "CAutomobile.h"

using namespace std;

int main()
{
    //CBody test1(10, 20), test2(30, 50);
    //
    ////cout << test1.Dist(test2) << endl;
    ////cout << test2.Dist(test1) << endl;
    //CBody test3 = test1 + test2;

    int rast, price_fuel;
    double x, y;

    CAutomobile Doed;
    
    cout << "Enter rast: ";
    cin >> rast;
    cout << "Enter GPS coor(shirota, dolgota): ";
    cin >> x >> y;
    cout << "Enter Fuel price: ";
    cin >> price_fuel;

    //cout << "Enter automobile data\nColor: "; cin >> Doed.color;
    //cout << "Model: "; cin >> Doed.model;
    //cout << "Privod: "; cin >> Doed.privod;
    //cout << "Engine: "; cin >> Doed.dvigatel;
    //cout << "Probeg: "; cin >> Doed.probeg;
    cout << "New cost: "; cin >> Doed.newcost;
    cout << "Current cost: "; cin >> Doed.curcost;
    cout << "Max speed: "; cin >> Doed.maxspeed;
    cout << "Fuel using for km: "; cin >> Doed.fuel_usingkm;
    cout << "Fuel's remain: "; cin >> Doed.fuel_remain;
    //cout << "Interval: "; cin >> Doed.interval;
    cout << "Shirota: "; cin >> Doed.shirota;
    cout << "Dolgota: "; cin >> Doed.dolgota;
    
    if (Doed.Doedet(rast))
        cout << endl << "Doedet!" << endl;
    else
        cout << endl << "Ne doedet!" << endl;

    cout << "Rasstoyanie: " << Doed.Rasst(x, y) << " Km" << endl;

    cout << "Poterya: " << Doed.Poterya() << " rub" << endl;

    cout << "Price of the trip: " << Doed.Price(price_fuel) << " rub" << endl;

    cout << "Time: " << Doed.Time() << " hours" << endl;

    system("pause");
}


