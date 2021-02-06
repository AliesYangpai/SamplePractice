#pragma once
#include "base_player.h"
class SoccerPlayer :public BasePlayer
{
public:
	~SoccerPlayer();
	SoccerPlayer();
	SoccerPlayer(int id, short age, char gender);
	void PassBall();
	void StopBall();
	void Dribbling();
	void ShotBall();
	void ShowSlogan();
};