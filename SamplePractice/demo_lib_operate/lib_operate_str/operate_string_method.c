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
// 6.�ַ����Ƚϣ�����Ƚϵ���ASCII ֵ��
int Do_strcmp(const char* lhs, const char* rhs)
{
	assert(lhs != NULL);
	assert(rhs != NULL);
	return strcmp(lhs, rhs);
}
// 7.�ַ����Ƚϣ������Ƚϣ�
int Do_strncmp(const char* lhs, const char* rhs, size_t num)
{
	assert(lhs != NULL);
	assert(rhs != NULL);
	return strncmp(lhs, rhs, num);
}
// 8.�ַ������ң�ȫ�����ң�
char* Do_strstr(const char* str, const char* substr)
{
	assert(str != NULL);
	assert(substr != NULL);
	return strstr(str, substr);
}
// 9.�ַ�����ȡ
char* Do_strtok(char* str, const char* delim)
{
	assert(delim != NULL);
	return strtok(str, delim);
}

// 10.��ϰ ���ַ�������
int Practice_strlen(const char* p_c)
{
	return strlen(p_c);
}

// 11.��ϰ�ַ�������
char * Practice_strcpy(char * des, const char * src)
{
	return strcpy(des,src);
}

// 12.�ַ���׷����ϰ
char * Practice_strcat(char * des, const char * src)
{
	return strcat(des,src);
}
