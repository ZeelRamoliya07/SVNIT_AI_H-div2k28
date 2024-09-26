// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
#include <stdio.h>
int main()
{
    int n = 1, sum = 0;
    while (n > 0)
    {
        printf("Enter the number ");
        scanf("%d", &n);
        if (n >= 0)
        {
            sum = sum + n;
        }
    }
    printf("Thesum is %d ", sum);

    return 0;
}