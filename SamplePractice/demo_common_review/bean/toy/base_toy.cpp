#include "base_toy.h"
BaseToy::~BaseToy()
{
	PRINT_T("~BaseToy()");
}
BaseToy::BaseToy(string name) 
{
	this->mName = name;
}
BaseToy::BaseToy(string name, float price) 
{
	this->mName = name;
	this->mPrice = price;
}

void BaseToy::set_mName(string name) 
{
	this->mName = name;
}

string BaseToy::get_mName() 
{
	return mName;
}

void BaseToy::set_mPrice(float price) 
{
	this->mPrice = price;
}

float BaseToy::get_mPrice() 
{
	return this->mPrice;
}

void BaseToy::showInfo() 
{
	PRINT_T("BaseToy showInfo()");
}

void BaseToy::showExtraInfo() 
{
	PRINT_T("BaseToy showExtraInfo()");
}


