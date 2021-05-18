#define _CRT_SECURE_NO_WARNINGS 1
#include "warcraft.h";
WarCraft::~WarCraft() 
{
	PRINT_T("~WarCraft");
}
WarCraft::WarCraft(string name) :BaseShip(name){}

void WarCraft::showCommonInfo() 
{
	PRINT_T("WarCraft::showCommonInfo()");
}

void WarCraft::showShipInfo() 
{
	PRINT_T("WarCraft::showShipInfo()");
}
void WarCraft::doWork() 
{
	PRINT_T("WarCraft::doWork() ÖÞ¼Êµ¼µ¯");
}
