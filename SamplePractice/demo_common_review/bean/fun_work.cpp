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


