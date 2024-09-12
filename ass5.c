// PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the values of a and b");
    scanf("%f%f", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("\n The swaped values of a and b are %f %f", a, b);

    return 0;
}