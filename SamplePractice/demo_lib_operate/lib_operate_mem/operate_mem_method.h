#pragma once
#include <assert.h>
#include <string.h>
/*
  ��Ҫ���յ����ݣ����ڴ���������������ܹ������ַ��������ܹ������������ͺ������������ͣ�������
  1.�ڴ濽�� memcpy
  2.memmove
  3.memcmp
  4.memset
*/
// 1.�ڴ濽����num����Ҫ�������ֽ���
void* Do_memcpy(void* dest,const void* src,size_t num);