/* Write a function to merge two sorted arrays into a single sorted array.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
void mergeArray(uint8_t u8OneSortedArr[],uint8_t u8OneArrsize,uint8_t u8TwoSortedArr[],u8TwoArrsize,uint8_t desArr[]);

{
    uint8_t newIdx = 0;
    while(newIdx < u8OneArrsize)
    {
        desArr[newIdx++] = u8OneSortedArr[newIdx];
    }

    while(newIdx < (u8OneArrsize + u8TwoArrsize))
    {
        desArr[newIdx++] = u8OneSortedArr[newIdx];
    }
    for(uint8_t u8Idx = 0; u8Idx < u8Size; u8Idx++)
    {
        if(srcArr[u8Idx] == element)
        {
            count++;
        }
    }     
    return count;
}

int main ()
{
    uint8_t u8OneSortedArr[] = {1, 2, 3, 4, 5, 6, 7};
    uint8_t u8TwoSortedArr[] = {11, 12, 13, 14, 15, 16, 17};

    uint8_t u8OneArrsize = sizeof(u8OneSortedArr)/sizeof (u8OneSortedArr[0]);
    uint8_t u8TwoArrsize = sizeof(u8TwoSortedArr)/sizeof (u8TwoSortedArr[0]);
    uint8_t desArrSize = u8OneArrsize + u8TwoArrsize;

    uint8_t desArr[desArrSize];

    mergeArray(u8OneSortedArr,u8OneArrsize,u8TwoSortedArr,u8TwoArrsize,desArr);
    printf("Des Arr size = %d\n", desArrSize);
    return 1;
}