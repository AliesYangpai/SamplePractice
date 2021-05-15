#define _CRT_SECURE_NO_WARNINGS 1
#include "steam_locomotive.h"
SteamLocomotive::~SteamLocomotive() 
{
	PRINT_T("~SteamLocomotive()");
}
SteamLocomotive::SteamLocomotive(string name) :BaseTrain(name) {}

void SteamLocomotive::ShowCommonInfo() 
{
	PRINT_T("SteamLocomotive ShowCommonInfo()");
}

void SteamLocomotive::ShowTrainInfo() 
{
	PRINT_T("SteamLocomotive ShowTrainInfo()");
}

void SteamLocomotive::doWork() 
{
	PRINT_T("SteamLocomotive doWork()");
}