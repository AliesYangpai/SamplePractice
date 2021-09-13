#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_string_method.h"
// 1 求字符串长度
int Get_strlen(const char* str)
{
	assert(str != NULL);
	return strlen(str);
}

// 2 字符串拷贝（全量拷贝）
char* Do_strcpy(char * dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	return	strcpy(dest, src);
}
// 3.字符串拷贝（按量拷贝）
char* Do_strncpy(char* dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	return strncpy(dest, src, num);
}
// 4.字符串追加 (全量追加)
char* Do_strcat(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	return strcat(dest, src);
}
// 5.字符串追加（按量追加）
char* Do_strncat(char * dest, const char* src, size_t num)
{
	assert(dest != NULL);
	assert(src != NULL);
	return strncat(dest, src, num);
}
// 6.字符串比较（这里比较的是ASCII 值）
int Do_strcmp(const char* lhs, const char* rhs)
{
	assert(lhs != NULL);
	assert(rhs != NULL);
	return strcmp(lhs, rhs);
}
// 7.字符串比较（按量比较）
int Do_strncmp(const char* lhs, const char* rhs, size_t num)
{
	assert(lhs != NULL);
	assert(rhs != NULL);
	return strncmp(lhs, rhs, num);
}
// 8.字符串查找（全量查找）
char* Do_strstr(const char* str, const char* substr)
{
	assert(str != NULL);
	assert(substr != NULL);
	return strstr(str, substr);
}
// 9.字符串截取
char* Do_strtok(char* str, const char* delim)
{
	assert(delim != NULL);
	return strtok(str, delim);
}

// 10.练习 求字符串长度
int Practice_strlen(const char* p_c)
{
	return strlen(p_c);
}

// 11.练习字符串拷贝
char * Practice_strcpy(char * des, const char * src)
{
	return strcpy(des,src);
}

// 12.字符串追加练习
char * Practice_strcat(char * des, const char * src)
{
	return strcat(des,src);
}
