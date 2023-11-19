#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("=============C Program to add two matrix and put the result in a third one, then print the result.===============\n\n\n");

    int matrix1 [2][2]={1,2,3,4};
    int matrix2 [2][2]={1,2,3,4};
    int sum_matrix [2][2]={0};

    for(int rows = 0 ; rows < 2 ; rows++)
    {
         for(int cols = 0 ; cols < 2 ; cols++)
         {
             sum_matrix[rows][cols] = matrix1[rows][cols] + matrix2[rows][cols];
             printf("%i\t", sum_matrix[rows][cols]);
         }
    }
    return 0;
}
