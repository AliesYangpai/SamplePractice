#define _CRT_SECURE_NO_WARNINGS 1
#include "racing_car.h"
RacingCar::~RacingCar() {}
RacingCar::RacingCar(string name, string team):BaseCar(name) 
{
	this->mTeam = team;
}
void RacingCar::set_mTeam(string team) 
{
	this->mTeam = team;
}

string RacingCar::get_mTeam() 
{
	return	this->mTeam;
}

void RacingCar::ShowCommonInfo() 
{
	PRINT_T("===RacingCar ShowCommonInfo");
}

void RacingCar::ShowCarInfo() 
{
	PRINT_T("===RacingCar ShowCarInfo");
}

void RacingCar::DoWork()
{
	PRINT_T("===RacingCar doWork !!!! To the finish ramp !!!!");
}
