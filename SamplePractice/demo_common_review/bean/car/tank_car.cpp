#define _CRT_SECURE_NO_WARNINGS 1
#include "tank_car.h"
TankCar::~TankCar() {}
TankCar::TankCar(string name, string company) :BaseCar(name) 
{
	this->mCompany = company;
}
void TankCar::set_mCompany(string company) 
{
	this->mCompany = company;
}

string TankCar::get_mCompany() 
{
	return this->mCompany;
}
void TankCar::ShowCommonInfo() 
{
	PRINT_T("===TankCar ShowCommonInfo");
}

void TankCar::ShowCarInfo() 
{
	PRINT_T("===TankCar ShowCarInfo");
}

void TankCar::DoWork()
{
	PRINT_T("===TankCar doWork !!!! watering~ watering !!!!");
}


