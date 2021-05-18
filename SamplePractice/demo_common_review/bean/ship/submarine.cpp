#define _CRT_SECURE_NO_WARNINGS 1
#include "submarine.h"
Submarine::~Submarine() 
{
	PRINT_T("~Submarine()");
}
Submarine::Submarine(string name) :BaseShip(name){}
void Submarine::showCommonInfo() 
{
	PRINT_T("Submarine showCommonInfo()");
}

void Submarine::showShipInfo()  
{
	PRINT_T("Submarine showShipInfo");
}

void Submarine::doWork() 
{
	PRINT_T("Submarine doWork ∑¢…‰”„¿◊");
}