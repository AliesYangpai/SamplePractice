#pragma once
#include "base_toy.h"
class CarToy:public BaseToy 
{
public:
	~CarToy();
	CarToy(string name);
	CarToy(string name, float price);

	virtual void showInfo();
	virtual void showExtraInfo();
	void doWork();
};