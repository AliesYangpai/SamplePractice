#pragma once
#include "base_car.h"
class RacingCar :public BaseCar {
private:
	string mTeam;
public:
	~RacingCar();
	RacingCar(string name, string team);
	void set_mTeam(string team);
	string get_mTeam();

	void ShowCommonInfo();
    void ShowCarInfo();
    void DoWork();
};