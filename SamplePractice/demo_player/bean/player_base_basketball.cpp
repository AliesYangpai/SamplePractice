#define _CRT_SECURE_NO_WARNINGS 1
#include "player_base_basketball.h"
PlayerBaseBasketball::~PlayerBaseBasketball() {}
PlayerBaseBasketball::PlayerBaseBasketball() {}
PlayerBaseBasketball::PlayerBaseBasketball(int id,short age,char gender):PlayerBase(id,age,gender){}

void PlayerBaseBasketball::ShowSlogan() 
{
	PRINT_T("I AM BASKETBALL PLAYER");
}
