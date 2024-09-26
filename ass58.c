// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDATION OF THOSE ARRAYS INTO THIRD.
#include <stdio.h>
int main()
{
    int a[10], b[10], c[10];
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
        c[i] = a[i] + b[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("The values of sum of a[%d] and b[%d] is %d\n", i, i, c[i]);
    }

    return 0;
}