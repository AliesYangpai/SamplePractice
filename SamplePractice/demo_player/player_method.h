#pragma once
#include "bean/player_base.h" // 这个引用可以注释掉了，为了便于理解，这里先不动他
#include "bean/player_basketball.h"
void ShowYourSelf(PlayerBase& player);
void ShowYourSelf(PlayerBaseBasketball* player);
void ShowPlayerSkills(PlayerBaseBasketball* player);
