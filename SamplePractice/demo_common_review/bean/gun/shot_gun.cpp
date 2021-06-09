#define _CRT_SECURE_NO_WARNINGS 1
#include "shot_gun.h"
ShotGun::~ShotGun() 
{
	PRINT_T("ShotGun","~ShotGun()");
}
ShotGun::ShotGun(string name) :BaseGun(name) {}
void ShotGun::showInfo() 
{
	PRINT_T("ShotGun", "showInfo()");
}
void ShotGun::showExtraInfo() 
{
	PRINT_T("ShotGun", "showExtraInfo()");
}
void ShotGun::doWork()
{
	PRINT_T("ShotGun", "doWork()");
}