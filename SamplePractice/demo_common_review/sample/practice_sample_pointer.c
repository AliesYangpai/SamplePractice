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

	// 指针数组 -> 指针的数组
	int* arr[] = { &a,&b,&c };

	// 数组指针 -> 数组的指针
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
		printf("%d", p[i]);
	}
	free(p);
	p = NULL;
}

void showCalloc()
{
	const int size = 5;
	int* p = calloc(size, sizeof(int));
	if (p == NULL)
	{
		printf("p is NULL");
		return;
	}
	//for (size_t i = 0; i < size; i++)
	//{
	//	p[i] = i;
	//}

	for (size_t i = 0; i < size; i++)
	{
		printf("%d", p[i]);
	}

	free(p);
	p = NULL;
}

void showRealloc()
{
	const int count = 5;
	int* p = calloc(count, sizeof(int));
	if (p == NULL)
	{
		printf("=== p is null");
		return;
	}
	for (size_t i = 0; i < count; i++)
	{
		*(p + i) = i;
	}
	printf("===realloc 之前===\n");

	
	for (size_t i = 0; i < count; i++)
	{
		printf("p[%d] = %d \n", i, p[i]);
	}
	printf("\n===realloc 之后===\n");
 //	int newCount = sizeof(p) / sizeof(p[0]);//wrong try,because p is the type of int* not  int arr[]
	const int newSize = 10;
	int* p2 = realloc(p, newSize * sizeof(int));
	for (size_t i = 0; i < newSize; i++)
	{
		printf("===p[%d] = %d \n", i, p[i]);
	}
	free(p2);
	p2 = NULL;
}
