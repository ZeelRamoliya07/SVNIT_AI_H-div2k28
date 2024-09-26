// PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N
#include <stdio.h>
int main()
{
    int a, sum_e = 0, sum_o = 0, b;
    printf("Enter any natural number");
    scanf("%d", &a);
    b = a;
    for (a; a != 0; a--)
    {
        if (a % 2 == 1)
        {
            sum_o = a + sum_o;
        }
        if (a % 2 == 0)
        {
            sum_e = a + sum_e;
        }
    }
    printf("\nSum of all even no between 1 & %d is %d", b, sum_e);
    printf("\n Sum of all odd no between 1 & %d is %d", b, sum_o);
    return 0;
}
