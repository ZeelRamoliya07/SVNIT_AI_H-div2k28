// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include <stdio.h>
int main()
{
    int num, sum = 0, q, a;
    printf("Enter the value of number \n");
    scanf("%d", &num);
    a = num;
    while (num > 0)
    {
        q = num % 10;
        sum = sum * 10 + q;
        num = num / 10;
    }
    if (a == sum)
    {
        printf("the number %d is PALINDROM", a);
    }
    else
    {
        printf("the number is not PALINDROM");
    }
    return 0;
}