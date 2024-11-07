// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE ,SAY X AND Y.
#include <stdio.h>
int interchange(int a, int b)
{
    int c;

    c = a;
    a = b;
    b = c;
    printf("\n The swaped values of a and b are %d \t%d", a, b);

    return 1;
}
int main()
{
    int a, b;
    printf("Enter the values of a and b");
    scanf("%d%d", &a, &b);
    interchange(a, b);
    return 0;
}
