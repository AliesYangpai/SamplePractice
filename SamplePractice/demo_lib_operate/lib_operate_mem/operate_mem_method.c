#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_mem_method.h"
void* Do_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	return memcpy(dest, src, num);
}