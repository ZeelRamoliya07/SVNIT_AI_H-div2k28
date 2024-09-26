// PROGRAM TO RED AND ARRAY OF 10 INTEGER AND PRINT SUM OF NUMBERS
#include <stdio.h>
int main()
{
    int a[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("\n Enter any number");
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("The sum of digits is %d", sum);

    return 0;
}