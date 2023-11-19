#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("=============== C Program to take an array elements from user, then print them out. (Print Array)===================\n");

       printf("\nEnter the count of the array : ");

       int n ;
       scanf("%i",&n);
       int nums[n];
       int c ;
       for(int i = 0 ; i < n ; i++ )
            {
            printf("\nEnter a number : ");
            scanf("%i",&c);
            nums[i] = c ;
            }
            for(int i = 0 ; i < n ; i++)
            {
             printf("\nYou entered (%i)",nums[i]);
            }

            //================================



    return 0;
}
