// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number to print factors of ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d \t", i);
        }
    }
    printf("are the factors of %d", n);

    return 0;
}