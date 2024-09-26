// PROGRAM TO PRINT 1,3,5,7,9………N.
#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter how many digits you want to print \n");
    scanf("%d", &n);
    for (i; i <= n * 2; i += 2)
    {
        printf("\n%d", i);
    }

    return 0;
}