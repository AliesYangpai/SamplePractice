#pragma once
#include "base_toy.h"
class AnimalToy : public BaseToy
{
public:
	~AnimalToy();
	AnimalToy(string name);
	AnimalToy(string name, float price);

	virtual void showInfo();
	virtual void showExtraInfo();
	void doWork();
};