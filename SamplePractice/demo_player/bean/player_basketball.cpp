#define _CRT_SECURE_NO_WARNINGS 1
#include "player_basketball.h"
KobePlayer::~KobePlayer() {}
KobePlayer::KobePlayer() {}
KobePlayer::KobePlayer(int id, short age, char gender) :PlayerBaseBasketball(id, age, gender) {}
void KobePlayer::ShowSlogan()
{
	PRINT_T("I AM BASKETBALL PLAYER KOBE!!!");
}
void KobePlayer::ThreePointer()
{
	PRINT_T("Kobe==ThreePointer");
	PRINT_T(9);
}
void KobePlayer::FadeAway()
{
	PRINT_T("Kobe==FadeAway");
	PRINT_T(9);
}
void KobePlayer::Dribbling()
{
	PRINT_T("Kobe==Dribbling");
	PRINT_T(7);
}

IversenPlayer::~IversenPlayer() {}
IversenPlayer::IversenPlayer() {}
IversenPlayer::IversenPlayer(int id, short age, char gender) :PlayerBaseBasketball(id, age, gender) {}
void IversenPlayer::ShowSlogan()
{
	PRINT_T("I AM BASKETBALL PLAYER IVERSEN!!!");
}
void IversenPlayer::ThreePointer()
{
	PRINT_T("Iversen==ThreePointer");
	PRINT_T(7);
}
void IversenPlayer::FadeAway()
{
	PRINT_T("Iversen==FadeAway");
	PRINT_T(8);
}
void IversenPlayer::Dribbling()
{
	PRINT_T("Iversen==Dribbling");
	PRINT_T(10);
}

JorDonPlayer::~JorDonPlayer() {}
JorDonPlayer::JorDonPlayer() {}
JorDonPlayer::JorDonPlayer(int id, short age, char gender) :PlayerBaseBasketball(id, age, gender) {}
void JorDonPlayer::ShowSlogan()
{
	PRINT_T("I AM BASKETBALL PLAYER JORDON!!!");
}
void JorDonPlayer::ThreePointer()
{
	PRINT_T("Jordon==ThreePointer");
	PRINT_T(8);
}
void JorDonPlayer::FadeAway()
{
	PRINT_T("Jordon==FadeAway");
	PRINT_T(10);
}
void JorDonPlayer::Dribbling()
{
	PRINT_T("Jordon==Dribbling");
	PRINT_T(9);
}