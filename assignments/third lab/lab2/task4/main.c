#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf(" \n\t============================= C Program to find Sum & Average of 2D Array. ===============================\n");

    int matrix [4][3]= {
                        1 , 2 ,3
                        ,4 , 5 ,6
                        ,7 , 8, 9
                        ,10,11,12
                        };


    int sum_rows ;

    for(int rows = 0 ; rows < 4 ; rows++)
        {
            sum_rows=0;

           for(int cols = 0 ; cols < 3 ; cols++)
           {
               sum_rows += matrix[rows][cols];
           }
            printf("\n \t\t\t\t\tThe sum of row number( %i ) is => ( %i ) \n" , rows+1,sum_rows);
        }

        printf("\n\t\t\t\t\t======================================") ;




        int sum_cols ;
        float cols_avg ;
        for(int cols = 0 ; cols < 3 ; cols++)
            {
                sum_cols = 0 ;
               for(int rows = 0 ; rows < 4 ; rows++)
               {
                   sum_cols +=  matrix[rows][cols];

               }
                printf("\n\n\t\t\t\t\tThe sum of column number ( %i ) is => ( %i ) " ,cols+1,sum_cols);
                cols_avg = sum_cols / 4.0 ;
                printf("\n\t\t\t\t\tThe Average of column number ( %i ) is => ( %f ) " ,cols+1,cols_avg);
            }

                 printf("\n\n\t=======================================================================================================") ;


    return 0;
}
