// PROGRAM TO CALCULATE SIMPLE INTEREST.
#include <stdio.h>
int main()
{
    int p, r, t, si;
    printf("Enter values of p,r and t");
    scanf("%d%d%d", &p, &r, &t);
    si = p * r * t / 100;
    printf("the simple interest is=%d", si);

    return 0;
}