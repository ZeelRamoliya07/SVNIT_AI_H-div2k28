// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES THESE ARRAYS.
#include <stdio.h>
int main()
{
    int a[10], b[10], x;
    printf("Enter any 10 numbers for a\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter any 10 numbers for b\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        x = a[i];
        a[i] = b[i];
        b[i] = x;
    }
    printf("Swaped values of a is \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d\n", a[i]);
    }
    printf("\n\n\n\n");
    printf("Swaped values of b is \n");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d\n", b[i]);
    }

    return 0;
}
