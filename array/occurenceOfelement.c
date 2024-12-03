/* Write a function to count the occurrences of a specific element in an array.*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int findOccurenceOfelement(uint8_t srcArr[],uint8_t u8Size, uint8_t element)
{
    uint8_t count = 0;
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
    // uint8_t u8Arr[] = {10, 7, 10, 9, 5, 2, 10};
    uint8_t u8Arr[] = {9, 7, 10, 9, 5, 2, 4};

    uint8_t size = sizeof(u8Arr)/sizeof (u8Arr[0]);
    uint8_t element = 9;
    uint8_t u8OccurenceOfelement = findOccurenceOfelement(u8Arr,size,element);
    printf("Given Num: %d Occured in Array: %d\n", element,u8OccurenceOfelement);
    return 1;
}