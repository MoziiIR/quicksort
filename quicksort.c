#include<stdint.h>

void swp(uint32_t *a,uint32_t *b)
{
    uint32_t temp = *a;
    *a = *b;
    *b = temp;
}



int8_t partition(uint32_t *arr,int8_t lb,uint8_t ub)
{
    int8_t  start = lb;
    int8_t  end = ub;
    uint32_t pivot = arr[lb];

    while(start < end)
    {
        while(arr[start] <= pivot) {start++;}

        while(arr[end] > pivot) {end--;}

        if(start < end) 
                  swp(&arr[start] , &arr[end]);
    }

    swp(&arr[lb],&arr[end]);
    return end;
}


void qk_sort(uint32_t *A,int8_t lb,int8_t ub)
{
    if(lb < ub)
    {
        int loc = partition(A,lb,ub);
        qk_sort(A,lb,loc-1);
        qk_sort(A,loc+1,ub);
    }
}