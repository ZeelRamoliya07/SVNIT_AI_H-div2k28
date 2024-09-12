// PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter the values of a and b");
    scanf("%f%f", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n the new values of a and b are %f \n %f", a, b);

    return 0;
}