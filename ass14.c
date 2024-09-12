// PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL
#include <stdio.h>
int main()
{
    char a;
    printf("enter the value of a \n");
    scanf("%c", &a);
    if (a >= 'A' && a <= 'Z')
    {
        printf("The number you have entered is CAPITAL LETTER");
    }
    else if (a >= 'a' && a <= 'z')
    {
        printf("The number you have entered is small case letter");
    }
    else if (a >= '0' && a <= '9')
    {
        printf("The number you have entered is a digit");
    }
    else
    {
        printf("The number you have entered is a special symbol");
    }

    return 0;
}