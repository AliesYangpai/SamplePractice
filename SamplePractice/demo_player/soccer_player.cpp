#define _CRT_SECURE_NO_WARNINGS 1
#include "soccer_player.h"

SoccerPlayer::~SoccerPlayer() {}
SoccerPlayer::SoccerPlayer() {}
SoccerPlayer::SoccerPlayer(int id, short age, char gender) :BasePlayer(id, age, gender) {}
void SoccerPlayer::PassBall()
{
	PRINT_T("===PassBall===");
}
void SoccerPlayer::StopBall()
{
	PRINT_T("===StopBall===");
}
void SoccerPlayer::Dribbling()
{
	PRINT_T("===Dribbling===");
}
void SoccerPlayer::ShotBall()
{
	PRINT_T("===PassBall===");
}
void SoccerPlayer::ShowSlogan()
{
	PRINT_T("I AM SOCCER PLAYER");
}
