#include <stdio.h>
#include <stdlib.h>

int main()
{

    // 1- C Program to print "Hello World"

    printf("Hello world!\n");

    //2- C Program to print ASCII number of a char

    char c = 'A';
    printf("The ASCI number of char (A) = %i",c);

    // 3- C Program to print a float number entered by the user

    float x ;

    printf("\n Please enter a float number : ") ;

    scanf("%f",&x);

    printf( "The float number you enterd is : X = %f " , x );

    // 4- C Program to add two integers

   int a = 5 ;
   int b = 10 ;

   int z = a + b ;

    printf("\n result = a + b =  %i",z);

    // 5 - C Program to make simple calculations (add, sub, multiply, divid) on two integers

    float q = 20 , w = 10 ;

    printf("\n q=%f" , q);
    printf("\n w=%f" , w);

    printf("\n q + w = %f",q + w);

    printf("\n q - w = %f",q - w);

    printf("\n q / w = %f",q / w);

    printf("\n q * w = %f",q * w);

    //6- C Program to print Hexa of a number

  /*   float h ;
    printf("\nPlease enter a number : ");
    scanf("%f",&h);
    printf("\n the number you entered is = %f",h);
   while( float h != 0){
            float remainder = h / 16 ;
            int number = h / 16 ;
            remainder * 16 ;
            if(number==10){
                   printf("A");
            }
            elseif(number==11){
                    printf("B");
            }
            elseif(number==12){
                    printf("C");
            }
            elseif(number==13){
                    printf("D");
            }
            elseif(number==14){
                    printf("E");
            }
            elseif(number==15){
                    printf("f");
            }
            else{
                printf("%i" , number));
            }

            }
            */

            printf("please enter a number : ");
            int p ;
            scanf("%i",&p);
            printf("\nThe hexa decimal value for the number is =%x",p);
    //7- C Program to compute Quotient and Remainder



    return 0;
}
