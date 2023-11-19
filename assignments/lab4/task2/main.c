#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){

     printf("=============  C Program to Find the Frequency of Characters in a String =============\n\n");

     printf("Enter the size of the word that you want to check : ");
     int size ;
     scanf("%i",&size);

     printf("Enter the word that you want to check : ");
     char word[size];
     scanf("%s",&word);

     int counter ;
     for(int i = 0 ; i < size ; i++ )
        {
          counter = 0 ;
          for(int z =i+1 ; z < size ; z++)
          {
              if(word[i] == word[z])
              {
                  counter ++ ;
              }
          }
          printf("\nThe char ( %c ) is repeated ( %i ) times \n",word[i] , counter+1);
        }
     printf("%s",word);
    }

    return 0;
}
