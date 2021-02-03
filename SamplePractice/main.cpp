#define _CRT_SECURE_NO_WARNINGS 1
extern "C" {
#include "demo_sort/base_sort.h"
}
#include <iostream>
#include "demo_print/base_print.h"
#include "demo_geometry/Cube.h"
using namespace std;
#define PRINT_T(T) cout << T << endl
/*
 int arr[] 冒泡排序
*/
void Test01()
{
	PRINT_T("===Test01");
	int arr[] = {1,9,5,7,3,8,2,6,4};
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSortArrayInt(arr,size,1);
	PrintArrayInt(arr, size);
}

/*
 计算长方体表面积、体积、判断是相等
*/
void Test02() 
{
	PRINT_T("===Test02");
	Cube cube1(3, 2, 2), cube2(2, 3, 2);
	float vol = cube1.CalculateVol();
	float sa = cube1.CalculateSa();
	PRINT_T(vol);
	PRINT_T(sa);
	PRINT_T(cube1.IsSameCube(&cube2));
}

/*
 运算符重载
*/
void Test03() 
{
	PRINT_T("===Test03");
	Cube cube1(2, 2, 2), cube2(1, 1, 1);
	Cube cube3 = cube1 + cube2; // 本质是 cube1.operator+(cube2);
	PRINT_T(cube3.CalculateVol());
}

/*
 选择排序
*/
void Test04() 
{
	PRINT_T("===Test04");
	int arr[] = { 1,9,5,7,3,8,2,6,4 };
	int size = sizeof(arr) / sizeof(arr[0]);
	SelectionSortArryInt(arr,size,0);
	PrintArrayInt(arr,size);
}

int main() 
{
	PRINT_T("===main()");
	//Test01();
	//Test02();
//	Test03();
	Test04();
	return 1;
}