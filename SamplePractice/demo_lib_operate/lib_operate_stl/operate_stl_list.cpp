#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_stl_list.h"
void AddDataMenuList(list<Menu*>* p_list, Menu* p_menu)
{
	if (p_list != NULL)
	{
		p_list->push_back(p_menu);
	}
}

/*
 颠倒list中数据（reverse()作用是颠倒下list中的顺序）
*/
void ReverseDataMenuList(list<Menu*>* p_list) 
{
	if (p_list != NULL)
	{
		PRINT_T("===ReverseDataMenuList");
		p_list->reverse();
	}
}

void ShowDataMenuList(const list<Menu*>* p_list)
{

	if (p_list == NULL || p_list->empty())
	{
		return;
	}
	for (list<Menu*>::const_iterator p_value = p_list->begin(); p_value != p_list->end(); p_value++)
	{
		(*p_value)->ShowInfo();
	}
}