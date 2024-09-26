// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include <stdio.h>
int main()
{
    int num, q, sum = 0;
    printf("Enter any number \n");
    scanf("%d", &num);
    while (num != 0)
    {
        q = num % 10;
        sum = sum + q;
        num = num / 10;
    }
    printf("the sum of digits of number n is %d \n", sum);
    return 0;
}
