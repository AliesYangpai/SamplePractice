#define _CRT_SECURE_NO_WARNINGS 1
#include "player_method.h"
void ShowYourSelf(BasePlayer& player) 
{
	player.ShowSlogan();
}

void ShowPlayerSkills(BaseketBallPlayer* player) 
{
	player->Dribbling();
	player->FadeAway();
	player->ThreePointer();
}