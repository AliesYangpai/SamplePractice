#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_mem_method.h"
void* Do_memcpy(void* dest, const void* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	return memcpy(dest, src, num); 
}
// 2.�ڴ濽���������ڴ��ص������
void* Do_memmove(void* dest, const void* src, size_t num) 
{
	assert(dest != NULL);
	assert(src != NULL);
	return memmove(dest, src, num);
}
// 3.�ڴ�Ƚ� 
int Do_memcmp(void* lhs, const void* rhs, size_t num) 
{
	assert(lhs != NULL);
	assert(rhs != NULL);
	return memcmp(lhs, rhs, num);
}
// 4.�ڴ�����  ��һ��ָ���ڴ�������ֵ
void* Do_memset(void* dest, int ch, size_t num) 
{
	assert(dest != NULL);
	return memset(dest, ch, num);
}