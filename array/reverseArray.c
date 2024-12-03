/* Reverse the array*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int reverseArry(uint8_t srcArr[],uint8_t u8Size)
{
    uint8_t start = 0;
    uint8_t end = u8Size -1;

    while(start < end)
    {
        uint8_t temp = srcArr[start];
        srcArr[start] = srcArr[end];
        srcArr[end] = temp;

        start++;
        end--;
    }

}

int main ()
{
    uint8_t u8Arr[] = {4, 7, 10, 9, 5, 2, 1};
    uint8_t size = sizeof(u8Arr)/sizeof (u8Arr[0]);
    printf("Arra Size is : %d\n",size);
    reverseArry(u8Arr,size);
    for(uint8_t u8Idx = 0; u8Idx < size; u8Idx++)
    {
        printf("Arra[%d]: %d ",u8Idx,u8Arr[u8Idx]);
        printf("--->>\n");
    }

    return 1;
}