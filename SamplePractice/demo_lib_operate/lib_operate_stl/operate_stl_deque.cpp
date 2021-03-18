#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_stl_deque.h"
void AddDataDeque(deque<int>* p_deque, int param) 
{
	p_deque->push_back(param);
}
void ShowDataDeque(deque<int>* p_deque) 
{
	sort(p_deque->begin(),p_deque->end());
	for (size_t i = 0; i < p_deque->size(); i++)
	{
		PRINT_T(p_deque->at(i));
	}
}