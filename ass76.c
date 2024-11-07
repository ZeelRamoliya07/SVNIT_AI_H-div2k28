// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>
int eo()
{
    int n;
    if (n % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd \n");
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter any number");
    scanf("%d", &n);
    eo(n);
    return 0;
}
