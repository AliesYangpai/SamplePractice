#define _CRT_SECURE_NO_WARNINGS 1
#include "practice_sample_pointer.h"

void showDataBigOrSmallEndStorage() 
{
	int a = 2;
	char* p_a = &a;
	&p_a == 0 ? printf("===Big es") : printf("===Small es");
}

void showArrPointer() 
{
	int a = 5;
	int b = 6;
	int c = 7;

	// ָ������ -> ָ�������
	int* arr[] = { &a,&b,&c };

	// ����ָ�� -> �����ָ��
	char arr1[] = "qposike";
	char arr2[] = { 'a','b','c' };
	char arr3[] = { 'a','c','w','6' };
	
	char(*p)[3] = &arr2;
}