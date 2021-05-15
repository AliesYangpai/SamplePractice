#pragma once
#include "base_train.h"
class SteamLocomotive :public BaseTrain
{
public:
	~SteamLocomotive();
	SteamLocomotive(string name);
	void ShowCommonInfo();
	void ShowTrainInfo();
	void doWork();
};