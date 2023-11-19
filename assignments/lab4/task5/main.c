#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    printf("================== New Colored Menu with Arrows ===============\n\n" );
    printf("\t\tThis is the drinks menu :\n\n" );

    char drinks[5][10] = {"Tea" , "Coffee" , "Mango" , "Lemon" , "Orange" };
    for(int i = 0 ; i < 5 ; i++)
    {
        printf("\t\t%s \n\n",drinks[i]);
    }

    /* COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
     void gotoxy(int x,int y)
     {
       coord.X=x;
       coord.Y=y;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
     }


    void SetColor(int ForgC)
     {
        WORD wColor;

        HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
        CONSOLE_SCREEN_BUFFER_INFO csbi;

        if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
        {
            wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
            SetConsoleTextAttribute(hStdOut, wColor);
        } */

    return 0;
}
