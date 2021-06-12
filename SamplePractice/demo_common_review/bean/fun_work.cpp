#include "fun_work.h"

void FunWorkShowGun01::operator()(BaseGun * p_gun)
{
	PRINT_T("", p_gun->get_mName());
	p_gun->showInfo();
	p_gun->showExtraInfo();
	p_gun->doWork();
}

FunWorkFindTargetGun01::FunWorkFindTargetGun01(string keyword)
{
	this->mKeyword = keyword;
}

bool FunWorkFindTargetGun01::operator()(BaseGun * p_gun)
{
	return p_gun->get_mName() == this->mKeyword;
}

FunWorkTransformGun01::FunWorkTransformGun01(string keyword) 
{
	this->mKeyWord = keyword;
}

BaseGun* FunWorkTransformGun01:: operator()(BaseGun* p_gun)
{
	p_gun->set_mName(this->mKeyWord);
	return p_gun;
}

FunWorkCountIfLessPriceData::FunWorkCountIfLessPriceData(float price)
{
	this->mPrice = price;
}

bool FunWorkCountIfLessPriceData::operator()(BaseToy* p_toy)
{
	return p_toy->get_mPrice() < this->mPrice;
}

