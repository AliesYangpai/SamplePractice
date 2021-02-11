#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_string_method.h"
// 1 ���ַ�������
int Get_strlen(const char* str)
{
	assert(str != NULL);
	return strlen(str);
}

// 2 �ַ���������ȫ��������
char* Do_strcpy(char * dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	return	strcpy(dest, src);
}
// 3.�ַ�������������������
char* Do_strncpy(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	return strncpy(dest, src, num);
}
// 4.�ַ���׷�� (ȫ��׷��)
char* Do_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	return strcat(dest, src);
}
// 5.�ַ���׷�ӣ�����׷�ӣ�
char* Do_strncat(char * dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	return strncat(dest, src, num);
}