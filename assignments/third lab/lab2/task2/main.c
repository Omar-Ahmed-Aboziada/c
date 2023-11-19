#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=============  C Program to find the maximum value of array elements=================\n");
    int nums[5] = {1,2,6,7,5};
    int max = nums[0] ;
    for(int i = 0 ; i < 5 ; i++)
     {
         if(max > nums[i])
         {
             max = max ;
         }
         else if(max < nums[i])
         {
             max = nums[i];
         }
     }
     printf("The maxim value is : (%i)",max);

    return 0;
}
