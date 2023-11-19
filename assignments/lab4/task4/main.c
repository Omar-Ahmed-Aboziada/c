#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("============= C Program to take firstName and lastName from user, then displays fullName =============\n\n");

    printf("Enter your first name: ");
    char f_name[20];
    scanf("%s", f_name);

    printf("Enter your last name: ");
    char l_name[20];
    scanf("%s", l_name);

    char full_name[40];

    strcpy(full_name, f_name);
    strcat(full_name, " ");
    strcat(full_name, l_name);

    printf("Your full name is: %s\n", full_name);





    return 0;
}
