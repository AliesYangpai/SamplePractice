#define _CRT_SECURE_NO_WARNINGS 1
#include "player_method.h"
void ShowYourSelf(PlayerBase& player) 
{
	player.ShowSlogan();
}
void ShowYourSelf(PlayerBaseBasketball* player)
{
	player->ShowSlogan();
}
void ShowPlayerSkills(PlayerBaseBasketball* player)
{
	player->Dribbling();
	player->FadeAway();
	player->ThreePointer();
}