// PROGRAM TO PRINT 1/1!+2/2!+3/3!+4/4!,………N.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter how many numbers you want to print \n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        printf("%d/%d!+", i, i);
    }
    printf("%d/%d!", i, i);

    return 0;
}