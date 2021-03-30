/*
 需要掌握的算法：
 遍历：
     for_each
	 transform
 查找：
	 find
	 find_if
	 adjacent_find ？？
	 binary_search
	 count
	 count_if
 排序：
	 sort
	 random_shuffle
	 reverse
*/
#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <list>
#include "bean/menu.h"
#include <algorithm>
#include <numeric>
using namespace std;
void AddAlogrithmDatas(vector<Menu*>* p_vector,Menu* p_menu);
void AddAlogrithmDatas(deque<Menu*>* p_deque, Menu* p_menu);
void AddAlogrithmDatas(list<Menu*>* p_list,Menu* p_menu);