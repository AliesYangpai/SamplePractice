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
 �����ʵ�� ��ʵ����Ч�ģ���ˣ��Ժ����ϰ�У������еĴ��麯����cpp�����ǾͲ�Ҫд��
*/
void BaseTrain::doWork() 
{
	PRINT_T("BaseTrain doWork()");
}
