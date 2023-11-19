#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1){
    printf("\n=== C Program to take char and displays if it is (Normal or Extended key) along with its ASCII value. ===\n\n");

     char ch = getch();

    if(ch == -32)
    {
        printf("Extended: \n");
        ch = getch();
        printf("and the second byte value is %i: ",ch);
    }
    else
    {
        printf("Normal: \n");
        printf("and the ASCII value is %i:",ch);
    }
    }


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
