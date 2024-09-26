// PROGRAM TO PRINT 2,4,6,8,10,12………N.
#include <stdio.h>
int main()
{
    int n, i = 2;
    printf("Enter how many digits you want to print \n");
    scanf("%d", &n);
    for (i; i <= n * 2; i += 2)
    {
        printf("\n%d", i);
    }

    return 0;
}