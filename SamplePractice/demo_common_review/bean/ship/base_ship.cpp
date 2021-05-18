#define _CRT_SECURE_NO_WARNINGS 1
#include "base_ship.h"
BaseShip::~BaseShip() 
{
	PRINT_T("~BaseShip()");
}

BaseShip::BaseShip(string name) 
{
	this->mName = name;
}
void BaseShip::set_mName(string name) 
{
	this->mName = name;
}

string BaseShip::get_mName() 
{
	return this->mName;
}


void BaseShip::showCommonInfo() 
{
	PRINT_T("BaseShip showCommonInfo()");
}

void BaseShip::showShipInfo() 
{
	PRINT_T("BaseShip showShipInfo()");
}