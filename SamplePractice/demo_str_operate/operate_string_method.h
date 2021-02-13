#pragma once
#include <assert.h>
#include <string.h>
/*
  需要掌握的内容:
  1 求字符长度-字符长度 strlen  【重点】【1.以'\0'作为计算的终点】
  2.字符串拷贝-全量拷贝 strcpy  【重点】【1.以'\0'作为计算的终点，并拷贝过来】【字符串】
  3.字符串拷贝-按量拷贝 strncpy 【重点】【1.不会补充复制'\0'】
  4.字符串追加-全量追加 strcat  【重点】【1.以'\0'作为计算的终点，并追加过来】【dest中需要有'\0'】
  5.字符串追加-按量追加 strncat 【重点】【1.以'\0'作为计算的终点，并追加过来】【dest中需要有'\0'】
  6.字符串比较-全量比较 strcmp  【重点】【此处比较的是ASCii值】【 ret < 0,ret = 0,ret > 0】
  7.字符串比较-按量比较 strncmp 【重点】【此处比较的是ASCII值】【 ret < 0,ret = 0,ret > 0】
  8.字符串查找-全量查找 strstr  【重点】【】
*/
// 1 字符串长度
int Get_strlen(const char* c);
// 2 字符串拷贝（全量拷贝+'\0'）
char* Do_strcpy(char * dest, const char* src);
// 3.字符串拷贝（按量拷贝）
char* Do_strncpy(char* dest, const char* src, size_t num);
// 4.字符串追加 (全量追加+'\0')
char* Do_strcat(char* dest, const char* src);
// 5.字符串追加（按量追加）
char* Do_strncat(char * dest, const char* src, size_t num);
// 6.字符串比较（全量比较） 
int Do_strcmp(const char* lhs, const char* rhs);
// 7.字符串比较（按量比较）
int Do_strncmp(const char* lhs, const char* rhs, size_t num);
// 8.字符串查找（全两查找）
char* Do_strstr(const char* str,const char* substr);
// 9.字符串截取
char* Do_strtok(char* str, const char* delim);