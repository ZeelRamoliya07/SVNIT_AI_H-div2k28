// WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
//         1+x where n=1
//         1+x/n where n=2
// Y(x,n) = 1 +x^n when n=3
//         1 + nx when n>3 or n<1
#include <stdio.h>
int main()
{
    int n, Y, x;
    printf("Enter the value of n & x to find the function Y \n");
    scanf("%d%d", &n, &x);
    if (n == 1)
    {
        Y = 1 + x;
        printf("The value of function Y is %d", Y);
    }
    if (n == 2)
    {
        Y = 1 + (x / n);
        printf("The value of function Y is %d", Y);
    }
    if (n == 3)
    {
        Y = 1 + x * x * x;
        printf("The value of function Y is %d", Y);
    }
    else
    {
        Y = 1 + x * n;
        printf("The value of function Y is %d", Y);
    }
    return 0;
}