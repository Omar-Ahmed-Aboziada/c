#include <stdio.h>
#include <stdlib.h>

// 7- C Progrm to Remove all Characters in a String Except Alphabet
int main()
{
    int size_r = 20;
    puts("Please Enter The size of array (length of your string), then enter string: ");
    //scanf("%d", &size_r);
    char arr[size_r];
    gets(arr);
    //why gets() not work when i use scanf to get dynamic size from user but when i remove scanf work well

    //char arr_1[15] = "He3llo7 Wo$rld";  for test
    int counter = 0, temp = 0;
    do
    {
 /*       if((arr[counter] < 65 && arr[counter] > 90) || (arr[counter] < 97 && arr[counter] > 122))
        {
            puts("hello");
            arr[counter] = arr[counter+1];
        }
        counter++;
        */

// out of our range is smaller than 65 or more than 122 and the area between 90 and 97 not with us also
        if((arr[counter] < 97 && arr[counter] > 90) || (arr[counter] < 65 || arr[counter] > 122))
        {
            //The temp to store the value of counter before start the next loop
            temp = counter;
            //here we do a loop to shifting all characters because shift one char will lead to duplicate char
            do
            {
                arr[counter] = arr[counter+1];
                counter++;
            }
            while(arr[counter] != '\0');
            //After shifting loop we should back counter with its value before shifting loop
            counter = temp;
        }
        else
        {
            counter++; //to check next index
        }
    }
    while(arr[counter] != '\0');

    printf("%s", arr);
    return 0;
}
