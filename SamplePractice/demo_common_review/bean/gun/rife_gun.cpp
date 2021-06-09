#define _CRT_SECURE_NO_WARNINGS 1
#include "rife_gun.h"
RifeGun::~RifeGun()
{
	PRINT_T("RifeGun", "~RifeGun()");
}
RifeGun::RifeGun(string name) :BaseGun(name) {}
void RifeGun::showInfo() 
{
	PRINT_T("RifeGun", "showInfo()");
}
void RifeGun::showExtraInfo() 
{
	PRINT_T("RifeGun", "showExtraInfo()");
}
void RifeGun::doWork() 
{
	PRINT_T("RifeGun", "doWork()");
}