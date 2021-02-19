#pragma once
#include <assert.h>
#include <string.h>
/*
  需要掌握的内容：【内存操作函数】不仅能够操作字符串，还能够操作其他类型函数，比如整型，浮点型
  1.内存拷贝 memcpy
  2.内存拷贝 memmove 专门处理内存重叠的情况
  3.内存比较 memcmp 比较指针指向值的个数
  4.内存设置 memset 给一个内存中设置值
*/
// 1.内存拷贝，num代表要拷贝的字节数
void* Do_memcpy(void* dest, const void* src, size_t num);
// 2.内存拷贝，处理内存重叠的情况
void* Do_memmove(void* dest, const void* src, size_t num);
// 3.内存比较  比较指针指向值的指定个数字节
int Do_memcmp(void* lhs, const void* rhs, size_t num);
// 4.内存设置  给一个指定内存中设置值
void* Do_memset(void* dest, int ch, size_t num);