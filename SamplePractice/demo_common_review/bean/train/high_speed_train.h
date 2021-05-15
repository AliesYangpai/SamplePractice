#pragma once
#include "base_train.h"
class HighSpeedTrain :public BaseTrain 
{
public:
	~HighSpeedTrain();
	HighSpeedTrain(string name);

	void ShowCommonInfo();
	void ShowTrainInfo();
	void doWork();
};