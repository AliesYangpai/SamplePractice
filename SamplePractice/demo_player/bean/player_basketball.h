#pragma once
#include "player_base_basketball.h"
class KobePlayer :public PlayerBaseBasketball
{
public:
	~KobePlayer();
	KobePlayer();
	KobePlayer(string name, short age, char gender);
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
	IversenPlayer(string name, short age, char gender);
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
	JorDonPlayer(string name, short age, char gender);
	void ShowSlogan();
	void ThreePointer();
	void FadeAway();
	void Dribbling();

};