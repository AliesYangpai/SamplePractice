#define _CRT_SECURE_NO_WARNINGS 1
#include "base_car.h"
BaseCar::~BaseCar() {}
BaseCar::BaseCar(string name) 
{
	this->mName = name;
}
void BaseCar::set_mName(string name) 
{
	this->mName = name;
}
string BaseCar::get_mName() 
{
	return this->mName;
}
void BaseCar::ShowCommonInfo() 
{
	PRINT_T("===BaseCar ShowCommonInfo");
}

void BaseCar::ShowCarInfo() 
{
	PRINT_T("===BaseCar void BaseCar::ShowCarInfo() ");
}
