#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include "soccer_player.h"
#define PRINT_T(T) cout <<T << endl
using namespace std;

SoccerPlayer::~SoccerPlayer() {}
SoccerPlayer::SoccerPlayer() {}
SoccerPlayer::SoccerPlayer(int id, short age, char gender) :BasePlayer(id, age, gender) {}
void SoccerPlayer::PassBall()
{
	cout << "===PassBall===" << endl;
}
void SoccerPlayer::StopBall()
{
	cout << "===StopBall===" << endl;
}
void SoccerPlayer::Dribbling()
{
	cout << "===Dribbling===" << endl;
}
void SoccerPlayer::ShotBall()
{
	cout << "===ShotBall===" << endl;
}
void SoccerPlayer::ShowSlogan()
{
	PRINT_T("I AM SCCER PLAYER");
}
