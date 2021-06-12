#include "animal_toy.h"
AnimalToy::~AnimalToy()
{
	PRINT_T("~AnimalToy()");
}
AnimalToy::AnimalToy(string name) :BaseToy(name)
{
	
}
AnimalToy::AnimalToy(string name, float price) : BaseToy(name,price) {}



void AnimalToy::showInfo() 
{
	PRINT_T("AnimalToy showInfo()")
}
void AnimalToy::showExtraInfo()
{
	PRINT_T("AnimalToy showExtraInfo()");
}
void AnimalToy::doWork() 
{
	PRINT_T("AnimalToy doWork()");
}

