#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_stl_algorithm.h"
void AddAlogrithmDatas(vector<Menu*>* p_vector, Menu* p_menu)
{
	if (p_vector != NULL)
	{
		p_vector->push_back(p_menu);
	}
}

void AddAlogrithmDatas(deque<Menu*>* p_deque, Menu* p_menu) 
{
	if (p_deque != NULL)
	{
		p_deque->push_back(p_menu);
	}
}