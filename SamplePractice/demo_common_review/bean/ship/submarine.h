#pragma once
#include "base_ship.h"
class Submarine : public BaseShip {
public:
	~Submarine();
	Submarine(string name);
	
	void showCommonInfo();
	void showShipInfo();
	void doWork();
};