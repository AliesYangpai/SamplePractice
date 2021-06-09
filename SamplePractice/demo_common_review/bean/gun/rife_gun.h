#pragma once
#include "base_gun.h"
class RifeGun :public BaseGun {
public:
	~RifeGun();
	RifeGun(string name);
	virtual void showInfo();
	virtual void showExtraInfo();
	virtual void doWork();
};