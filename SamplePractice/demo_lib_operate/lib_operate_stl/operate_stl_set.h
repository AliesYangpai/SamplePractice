#pragma once
#include <iostream>
#include <set>
#define PRINT_T(T) cout << T << endl
using namespace std;

void InsertDataSet(set<int>* p_set, int param);
void ShowDataSet(const set<int>* p_set);
set<int>::iterator FindDataSet(set<int>* p_set,int param);