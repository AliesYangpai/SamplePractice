#pragma once
#include "player_base_basketball.h"
class KobePlayer :public PlayerBaseBasketball
{
public:
	~KobePlayer();
	KobePlayer();
	KobePlayer(int id, short age, char gender);
	void ShowSlogan();
	void ThreePointer();
	void FadeAway();
	void Dribbling();
};

class IversenPlayer :public PlayerBaseBasketball
{
public:
	~IversenPlayer();
	IversenPlayer();
	IversenPlayer(int id, short age, char gender);
	void ShowSlogan();
	void ThreePointer();
	void FadeAway();
	void Dribbling();
};

class JorDonPlayer :public PlayerBaseBasketball
{
public:
	~JorDonPlayer();
	JorDonPlayer();
	JorDonPlayer(int id, short age, char gender);
	void ShowSlogan();
	void ThreePointer();
	void FadeAway();
	void Dribbling();

};