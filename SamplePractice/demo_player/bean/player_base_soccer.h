#pragma once
#include "player_base.h"
class PlayerBaseSoccer :public PlayerBase
{
public:
	~PlayerBaseSoccer();
	PlayerBaseSoccer();
	PlayerBaseSoccer(int id, short age, char gender);
	void PassBall();
	void StopBall();
	void Dribbling();
	void ShotBall();
	void ShowSlogan();
};