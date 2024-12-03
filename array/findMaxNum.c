/* Find the Maximum Element in an Array */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int u8FindMaxNumArry(uint8_t arr[],uint8_t u8Size)
{
   uint8_t max = arr[0];
   for(uint8_t u8Idx = 1; u8Idx < u8Size; u8Idx++)
   {
            if(arr[u8Idx] > max )
            {
                max = arr[u8Idx];
            }
   }
   return max;
}

int main ()
{
    uint8_t u8Arr[] = {4, 7, 10, 9, 5, 2, 1};
    uint8_t size = sizeof(u8Arr)/sizeof (u8Arr[0]);
    printf("Arra Size is : %d\n",size);
    uint8_t num = u8FindMaxNumArry(u8Arr,size);
    printf("Maximum number of arrya  is : %d\n",num);

    return 1;
}