// PROGRAM TO PRINT 1,4,9,16,25,………N.
#include <stdio.h>
int main()
{
    int n, i = 1, j;
    printf("Enter how many digits you want to print \n");
    scanf("%d", &n);
    for (i; i <= n; i++)
    {
        j = i * i;
        printf("\n%d", j);
    }

    return 0;
}