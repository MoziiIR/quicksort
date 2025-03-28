#ifndef QUICKSORT_H
#define QUICKSORT_H

#include<stdint.h>

void swp(uint32_t *a,uint32_t *b);
int8_t partition(uint32_t *arr,int8_t lb,uint8_t ub);
void qk_sort(uint32_t *A,int8_t lb,int8_t ub);

#endif