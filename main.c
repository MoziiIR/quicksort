#include<stdio.h>
#include<stdint.h>
#include "quicksort.h"

void main()
{

uint32_t arr[]={5,9,1,3,2,10,95,30};

qk_sort(arr,0,7);

for(int8_t k=0;k<8;k++) printf("%3u",arr[k]);

printf("\n");


}

