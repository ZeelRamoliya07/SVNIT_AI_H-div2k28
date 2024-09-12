// PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the number is even \n");
    }
    if (a % 2 == 1)
    {
        printf("the number is odd \n");
    }

    return 0;
}