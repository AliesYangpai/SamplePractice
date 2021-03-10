#define _CRT_SECURE_NO_WARNINGS 1
#include "player_base_basketball.h"
PlayerBaseBasketball::~PlayerBaseBasketball() {}
PlayerBaseBasketball::PlayerBaseBasketball() {}
PlayerBaseBasketball::PlayerBaseBasketball(string name,short age,char gender):PlayerBase(name,age,gender){}

void PlayerBaseBasketball::ShowSlogan() 
{
	PRINT_T("I AM BASKETBALL PLAYER");
}
