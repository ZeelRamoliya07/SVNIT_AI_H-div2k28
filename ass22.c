// PROGRAM TO CALCULATE FACTORIAL OF A NO.
#include <stdio.h>
int main()
{
    int i, num;
    int f = 1;
    printf("Enter the value of num \n");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        f = f * i;
    }
    printf("The factorial of %d is %d", num, f);
    return 0;
}