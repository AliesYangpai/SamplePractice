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
#include "gun/base_gun.h"

using namespace std;
class FunWorkShowGun01 
{
public:
	void operator()(BaseGun* p_gun);
};

class FunWorkFindTargetGun01
{
public:
	string mKeyword;
	FunWorkFindTargetGun01(string keyword);
	bool operator()(BaseGun* p_gun);
};

class FunWorkTransformGun01 {
public:
	string mKeyWord;
	FunWorkTransformGun01(string keyword);
	BaseGun* operator()(BaseGun* p_gun);
};