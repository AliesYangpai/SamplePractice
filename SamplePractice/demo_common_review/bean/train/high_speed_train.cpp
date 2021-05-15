#define _CRT_SECURE_NO_WARNINGS 1
#include "high_speed_train.h"

HighSpeedTrain::~HighSpeedTrain() 
{
	PRINT_T("~HighSpeedTrain()");
}
HighSpeedTrain::HighSpeedTrain(string name):BaseTrain(name)
{}
void HighSpeedTrain::ShowCommonInfo() 
{
	PRINT_T("HighSpeedTrain ShowCommonInfo()");
}
void HighSpeedTrain::ShowTrainInfo() 
{
	PRINT_T("HighSpeedTrain ShowTrainInfo()");
}

void HighSpeedTrain::doWork()
{
	PRINT_T("HighSpeedTrain doWork()");
}