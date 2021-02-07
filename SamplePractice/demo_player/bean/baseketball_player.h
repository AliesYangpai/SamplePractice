#pragma once
#include "base_player.h"
class BaseketBallPlayer :public BasePlayer
{
public:
	~BaseketBallPlayer();
	BaseketBallPlayer();
	BaseketBallPlayer(int id, short age, char gender);

	void ShowSlogan();
	virtual void ThreePointer() = 0;
	virtual void FadeAway() = 0;
	virtual void Dribbling() = 0;
};

class KobePlayer :public BaseketBallPlayer
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

class IversenPlayer :public BaseketBallPlayer
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

class JorDonPlayer :public BaseketBallPlayer
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