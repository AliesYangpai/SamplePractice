#pragma once
#include <iostream>
#include <list>
#include "bean/menu.h"
#define PRINT_T(T) cout << T << endl
using namespace std;
/*
  在c++中list代表的是链表，这一点与java还是不一样的
*/
void AddDataMenuList(list<Menu*>* p_list, Menu* p_menu);
void ShowDataMenuList(const list<Menu*>* p_list);