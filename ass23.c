// PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>)
#include <stdio.h>
int main()
{
    int base, power;
    int num = 1;
    printf("Enter the base value ");
    scanf("%d", &base);
    printf("Enter the pow value ");
    scanf("%d", &power);

    for (int i = 1; i <= power; i++)
    {
        num = num * base;
    }

    printf("The power is %d", num);
    return 0;
}