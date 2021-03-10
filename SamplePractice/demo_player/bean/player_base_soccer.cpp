#define _CRT_SECURE_NO_WARNINGS 1
#include "player_base_soccer.h"

PlayerBaseSoccer::~PlayerBaseSoccer() {}
PlayerBaseSoccer::PlayerBaseSoccer() {}
PlayerBaseSoccer::PlayerBaseSoccer(string name, short age, char gender) :PlayerBase(name, age, gender) {}
void PlayerBaseSoccer::PassBall()
{
	PRINT_T("===PassBall===");
}
void PlayerBaseSoccer::StopBall()
{
	PRINT_T("===StopBall===");
}
void PlayerBaseSoccer::Dribbling()
{
	PRINT_T("===Dribbling===");
}
void PlayerBaseSoccer::ShotBall()
{
	PRINT_T("===PassBall===");
}
void PlayerBaseSoccer::ShowSlogan()
{
	PRINT_T("I AM SOCCER PLAYER");
}
