#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("C Program to Copy String Without Using strcpy()\n");

    char name1[10] = "dad" ;
    char name2[15] = "omaaaar";

    for(int i = 0 ; i < 15 ; i++)
    {
       name1[i] = name2[i];
    }
    printf(name1);


   /* printf("Enter the string you want to copy : ");
     while(name2[i]!='')
    {
        name2[i]=getche();

    }
    printf("The string you inserted is : %s",name2); */

              /*
          from experiment note that the second byte value for the following extended keys are :

          Up = 72

          Down = 80

          Left = 75

          Right = 77

          and the ASCII for the following normal keys are :

          Enter = 13

          Escape = 27

          */






    /*
    char name[10];
    for(int i = 0 ; i < 10 ; i++)
    {
        name[i]=getch();
    }
    printf(name);
    */

  /* char word1[4] = {"Omar"} ;
   char word2[4] ;

   for(int i = 0 ; i < 4 ; i++)
   {
       word2[i] = word1[i];
   }

   printf(word2);*/

    return 0;
}
