#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
 printf("\n\n\n\t\t\t  C Program to Remove all Characters in a String Except Alphabet  \n\n");
    printf("\t\t\t ================================================================\n\n") ;

    printf("\nEnter the word you want to clean : ");

    char word[20] ;

     for(int i = 0 ; i < 20 ;i++)
     {
         char input = getche();
         int ascii_input = ("%i",input);

         if(  (ascii_input>=65 && ascii_input<=90)
                               ||
              (ascii_input>=97 && ascii_input<=122)  )
         {
             word[i]=("%c",input);
         }

         if(ascii_input == 13 )
            {
                word[i] = '\0';
                  break ;
            }
     }
     printf("\n\nThe clean word is : %s",word);
     }

    /*
    char word[10] = "Omar123abc";

    char clean_word[10] ;

     for(int i = 0 ; i < 10 ; i++ )
     {
         int ascii = ("%i",word[i]);
         if(   (( ascii>= 65) && (ascii<= 90) )
                             ||
               (( ascii>= 97) && (ascii<= 122)) )
         {
             clean_word[i] = word[i] ;
         }
         else
         {
             continue ;
         }
     }
     printf(clean_word);  */


     /*
    from experiment note that the second byte value for the following extended keys are :

    Up = 72

    Down = 80

    Left = 75

    Right = 77

    and the ASCII for the following normal keys are :

    Enter = 13

    Escape = 27

    A ~ Z : 65 ~ 90
    a ~ z : 97 ~ 122

    */
    return 0;

}
