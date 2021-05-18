#pragma once
#include "base_ship.h"
class WarCraft :public BaseShip{
public:
	~WarCraft();
	WarCraft(string name);
	void showCommonInfo();
	void showShipInfo();
	void doWork();
};