#pragma once
#include <assert.h>
#include <string.h>
/*
  需要掌握的内容：【内存操作函数】不仅能够操作字符串，还能够操作其他类型函数，比如整型，浮点型
  1.内存拷贝 memcpy
  2.memmove
  3.memcmp
  4.memset
*/
// 1.内存拷贝，num代表要拷贝的字节数
void* Do_memcpy(void* dest,const void* src,size_t num);