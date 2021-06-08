#pragma once
#include <iostream>
#include "apple.h"
#include "peach.h"
#include "banana_immortal.h"
#include "car/racing_car.h"
#include "car/tank_car.h"
#include "train/high_speed_train.h"
#include "train/steam_locomotive.h"
#include "ship/submarine.h"
#include "ship/warcraft.h"
using namespace std;
class FunShip01 {
public:
	void operator()(BaseShip* p_ship) {
		p_ship->showCommonInfo();
		p_ship->doWork();
	}
};