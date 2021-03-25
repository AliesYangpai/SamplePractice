#pragma once
#include <iostream>
#include <vector>
#include <deque>
#include <stack>
#include <list>
#include "bean/menu.h"
#include <algorithm>
using namespace std;
void AddAlogrithmDatas(vector<Menu*>* p_vector,Menu* p_menu);
void AddAlogrithmDatas(deque<Menu*>* p_deque, Menu* p_menu);
void AddAlogrithmDatas(list<Menu*>* p_list,Menu* p_menu);