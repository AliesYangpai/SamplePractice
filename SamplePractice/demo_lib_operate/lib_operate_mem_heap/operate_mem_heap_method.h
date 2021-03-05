#pragma once
/*
  ��Ҫ���յ����ݣ�
  1.malloc��ʹ����free
  2.calloc��ʹ����free
  3.realloc��ʹ����frae
*/
#include <stdlib.h>
#include <stdio.h>
/*
  malloc ����ռ䣬size����λ�ֽ�
*/
void Do_malloc(size_t size);
/*
  calloc ����ռ䣬num:����������size:��λ�ֽ�
  calloc ����ռ�󣬻��ʼ��ÿ���ռ��ֵΪ0
*/
void Do_calloc(size_t num, size_t size);

/*
  realloc ����ռ䣬��ǰ�ռ䲻��ʹ��ʱ��ʹ��relloc����ռ�
  realloc ���p_raw �������㹻�ռ䣬����p_raw����׷�ӿռ�
          ���p_raw ����ռ䲻�㣬�������� x (raw+new_size)�ռ䣬֮��p_raw�е����ݸ��Ƶ����ڴ��У�Ȼ���ڲ��Զ��ͷ�p_raw
*/
void Do_realloc(int* p_raw, size_t new_size);