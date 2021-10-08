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

void showMalloc()
{
	const int count = 5;
	int* p = malloc(count * sizeof(int));
	if (p == NULL)
	{
		printf("p is NULL");
		return;
	}
	for (size_t i = 0; i < count; i++)
	{
		*(p + i) = i;
	}
	for (size_t i = 0; i < count; i++)
	{
		printf("%d",p[i]);
	}
	free(p);
}
