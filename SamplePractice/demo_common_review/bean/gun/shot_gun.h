#pragma once
#include "base_gun.h"
class ShotGun :BaseGun {
public:
	~ShotGun();
	ShotGun(string name);
	virtual void showInfo();
	virtual void showExtraInfo();
	virtual void doWork();
};