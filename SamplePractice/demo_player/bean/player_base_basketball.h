#pragma once
#include "player_base.h"
class PlayerBaseBasketball :public PlayerBase
{
public:
	~PlayerBaseBasketball();
	PlayerBaseBasketball();
	PlayerBaseBasketball(int id, short age, char gender);

	void ShowSlogan();
	virtual void ThreePointer() = 0;
	virtual void FadeAway() = 0;
	virtual void Dribbling() = 0;
};