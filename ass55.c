// PROGRAM TO READ AN ARRAY OF 10 INTEGER AND COUNT TOTAL NO OF ODD AND TOTAL NO. OF EVEN ELEMENT
#include <stdio.h>
int main()
{
    int a[10], l_e = 0, l_o = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("\n Enter any number");
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            l_e = l_e + 1;
        }
        if (a[i] % 2 == 1)
        {
            l_o = l_o + 1;
        }
    }
    printf("\n The number of even numbers are %d", l_e);
    printf("\n The number of odd numbers are %d", l_o);

    return 0;
}