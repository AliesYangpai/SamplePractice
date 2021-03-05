#pragma once
/*
  需要掌握的内容：
  1.malloc的使用与free
  2.calloc的使用与free
  3.realloc的使用与frae
*/
#include <stdlib.h>
#include <stdio.h>
/*
  malloc 申请空间，size：单位字节
*/
void Do_malloc(size_t size);
/*
  calloc 申请空间，num:对象数量，size:单位字节
  calloc 申请空间后，会初始化每个空间的值为0
*/
void Do_calloc(size_t num, size_t size);

/*
  realloc 申请空间，当前空间不够使用时，使用relloc申请空间
  realloc 如果p_raw 后面有足够空间，则在p_raw后面追加空间
          如果p_raw 后面空间不足，则新申请 x (raw+new_size)空间，之后将p_raw中的数据复制到新内存中，然后内部自动释放p_raw
*/
void Do_realloc(int* p_raw, size_t new_size);