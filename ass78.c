// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include <stdio.h>
int arm(int num)
{
    int sum = 0, q, a;

    a = num;
    while (num > 0)
    {
        q = num % 10;
        sum = sum + q * q * q;
        num = num / 10;
    }
    if (a == sum)
    {
        printf("the number %d is armstrong", a);
    }
    else
    {
        printf("the number is not armstrong");
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter the value of number \n");
    scanf("%d", &num);
    arm(num);
    return 0;
}