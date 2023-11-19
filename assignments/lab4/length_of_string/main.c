#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf("\n===== C Program to Find the Length of a String without Using strlen() ====\n");

   printf("\nEnter the word you want to know it's length : ") ;

   char word[10] ;

   int word_lenght = 0  ;

   for(int i = 0 ; i < 10 ; i++)
   {
       char input = getche();
       int check_input_ascii = ("%i",input);
       if(check_input_ascii == 13)
       {
           word[i]='\0';
           word_lenght = i ;
           break;
       }
       else
       {
           word[i] = input;
       }
   }

       printf("\n\n\nThe word you entered is : %s",word);
       printf("\n and it's length is : %i leters",word_lenght);
    return 0;
}
