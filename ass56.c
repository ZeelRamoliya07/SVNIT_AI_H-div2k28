// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO. OF POSITIVE,NEGATIVE, AND ZERO ELEMENTS.
#include <stdio.h>
int main()
{
    int a[10], lp = 0, ln = 0, lz = 0;
    printf("Enter any numbers\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] > 0)
        {
            lp = lp + 1;
        }
        if (a[i] < 0)
        {
            ln = ln + 1;
        }
        if (a[i] == 0)
        {
            lz = lz + 1;
        }
    }
    printf("\nThe number of positive elements are %d", lp);
    printf("\nThe number of negative elements are %d", ln);
    printf("\nThe number of zero elements are %d", lz);
    return 0;
}