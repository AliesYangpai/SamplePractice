#pragma once
#include "banana.h"
class BananaImmortal :public Banana{
private:
	string mColor;
public:
	~BananaImmortal();
	BananaImmortal(string name, string type);
	BananaImmortal(string name, string type, string color);
	void set_color(string color);
	string get_color();
	void show_banana_info(); // ÆÕÍ¨º¯Êý
};