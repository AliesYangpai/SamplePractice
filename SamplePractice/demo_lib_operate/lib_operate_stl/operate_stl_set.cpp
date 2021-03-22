#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_stl_set.h"
/*
 set集合中添加数据使用的是insert
*/
void InsertDataSet(set<int>* p_set, int param)
{
	if (p_set ==NULL)
	{
		return;
	}
	p_set->insert(param);
}
void ShowDataSet(const set<int>* p_set)
{
	if (p_set == NULL)
	{
		return;
	}
	for (set<int>::const_iterator p_value = p_set->begin(); p_value != p_set->end(); p_value++) 
	{
		PRINT_T(*p_value);
	}
}
set<int>::iterator FindDataSet(set<int>* p_set, int param) 
{
	PRINT_T("===FindDataSet");
	return	p_set->find(param);
}