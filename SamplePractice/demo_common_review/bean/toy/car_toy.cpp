#include "car_toy.h"
CarToy::~CarToy() {}
CarToy::CarToy(string name):BaseToy(name)
{
}
CarToy::CarToy(string name,float price):BaseToy(name,price)
{
}

void CarToy::showInfo() 
{
	PRINT_T("CarToy showInfo()");
}

void CarToy::showExtraInfo() 
{
	PRINT_T("CarToy showExtraInfo()");
}

void CarToy::doWork() 
{
	PRINT_T("CarToy doWork()");
}
