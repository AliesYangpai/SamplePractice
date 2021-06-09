#define _CRT_SECURE_NO_WARNINGS 1
#include "base_gun.h"
#include <string>
BaseGun::~BaseGun() {}
BaseGun::BaseGun(string name) 
{
	this->mName = name;
}

void BaseGun::set_mName(string name) 
{
	this->mName = name;
}
string BaseGun::get_mName() 
{
	return this->mName;
}

void BaseGun::showInfo() 
{
	PRINT_T("BaseGun", "showInfo()");
}

void BaseGun::showExtraInfo() 
{
	PRINT_T("BaseGun", "showExtraInfo()");
}