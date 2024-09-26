// PROGRAM TO REVERSE OF A GIVEN NO.
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
    printf("Reverse of %d is %d", a, sum);
    return 0;
}