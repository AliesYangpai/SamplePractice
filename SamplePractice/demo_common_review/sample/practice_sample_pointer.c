#define _CRT_SECURE_NO_WARNINGS 1
#include "practice_sample_pointer.h"

void showDataBigOrSmallEndStorage() 
{
	int a = 2;
	char* p_a = &a;
	&p_a == 0 ? printf("===Big es") : printf("===Small es");
}