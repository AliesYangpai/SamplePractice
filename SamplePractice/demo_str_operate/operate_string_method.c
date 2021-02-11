#define _CRT_SECURE_NO_WARNINGS 1
#include "operate_string_method.h"
// 1 Çó×Ö·û´®³¤¶È
int Get_strlen(const char* str)
{
	assert(str != NULL);
	return strlen(str);
}

// 2 ×Ö·û´®¿½±´£¨È«Á¿Ìæ»»£©
char* Do_strcpy(char * dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	return	strcpy(dest, src);
}
// 3.×Ö·û´®¿½±´£¨°´Á¿Ìæ»»£©
char* Do_strncpy(char* dest, const char* src, size_t num) 
{
	assert(dest != NULL);
	assert(src != NULL);
	return strncpy(dest, src, num);
}