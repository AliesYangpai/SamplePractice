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
int main() 
{
	PRINT_T("===main()");
//	Test01();
	Test02();
	return 1;
}