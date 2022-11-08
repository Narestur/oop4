#include "Car.h"
using namespace carR;
#pragma execution_character_set( "utf-8" )

//Car::Car(int y = 1, int p = 1, int cR = 1, string m = "1", string c = "1") :Car_info(y, p, cR), Car_parameters(m, c)
//{
//	year = y;
//	price = p;
//	CarRun = cR;
//	model = m;
//	color = c;
//}
//Car::Car() :Car_info(), Car_parameters()
//{}
Car::Car(int mark)
{
	m = mark;
}
Car::Car()
{
	m = 1;
}
int Car_avto::Get_wheal() { return 4; }
int Car_avto::Get_weight() { return 5; };
int Car_avto::Get_seat() { return 4; };
string Car_avto::Get_mark() 
{
	switch (m)
	{
	case 1: return "Tesla";
	case 2: return "Reno";
	case 3: return "Hyundai";
	case 4: return "Fiat";
	case 5: return "Lexus";
	default:
		return "Mazda";
	}
};
string Car_avto::Get_car_type() { return "Машина"; };


int Car_truck::Get_wheal() { return 8; }
int Car_truck::Get_weight() { return 20; };
int Car_truck::Get_seat() { return 2; };
string Car_truck::Get_mark()
{
	switch (m)
	{
	case 1: return "Volvo";
	case 2: return "Iveco";
	case 3: return "FAW";
	case 4: return "Isuzu";
	case 5: return "Renault";
	default:
		return "Scania";
	}
};
string Car_truck::Get_car_type() { return "Вантажівка"; };


int Car_bus::Get_wheal() { return 4; }
int Car_bus::Get_weight() { return 10; };
int Car_bus::Get_seat() { return 20; };
string Car_bus::Get_mark()
{
	switch (m)
	{
	case 1: return "MAN";
	case 2: return "Mercedes";
	case 3: return "Autosan";
	case 4: return "Aerocoach";
	case 5: return "Karosa";
	default:
		return "Ross";
	}
};
string Car_bus::Get_car_type() { return "Автобус"; };