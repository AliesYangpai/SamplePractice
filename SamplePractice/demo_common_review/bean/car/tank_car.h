#pragma once
#include "base_car.h"
class TankCar :public BaseCar {
private:
	string mCompany;
public:
	~TankCar();
	TankCar(string name, string company);
	void set_mCompany(string company);
	string get_mCompany();
	void ShowCommonInfo();
	void ShowCarInfo();
    void DoWork();
};