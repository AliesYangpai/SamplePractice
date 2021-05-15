#define _CRT_SECURE_NO_WARNINGS 1
#include "base_train.h"
BaseTrain::~BaseTrain() 
{
	PRINT_T("~BaseTrain()");
}
BaseTrain::BaseTrain(string name) 
{
	this->mName = name;
}

void BaseTrain::set_name(string name) 
{
	this->mName = name;
}

string BaseTrain::get_name() 
{
	return this->mName;
}

void BaseTrain::ShowCommonInfo() 
{
	PRINT_T("BaseTrain ShowCommonInfo()");
}

void BaseTrain::ShowTrainInfo() 
{
	PRINT_T("BaseTrain ShowTrainInfo()");
}

/*
 这里的实现 其实是无效的，因此，以后的练习中，基类中的纯虚函数在cpp中我们就不要写了
*/
void BaseTrain::doWork() 
{
	PRINT_T("BaseTrain doWork()");
}
