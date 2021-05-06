#define _CRT_SECURE_NO_WARNINGS 1
#include "bananaImmortal.h"
BananaImmortal::~BananaImmortal() 
{
	PRINT_T("~BananaImmortal()");
}
BananaImmortal::BananaImmortal(string name, string type) :Banana(name, type) {}
BananaImmortal::BananaImmortal(string name, string type, string color) : Banana(name, type) 
{
	this->mColor = color;
}

void BananaImmortal::set_color(string color) 
{
	this->mColor = color;
}

string BananaImmortal::get_color() 
{
	return this->mColor;
}

void BananaImmortal::show_banana_info() 
{
	PRINT_T("===BananaImmortal show_banana_info()");
}