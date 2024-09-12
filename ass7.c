// PROGRAM TO CALCULATE AREA OF A TRIANGLE
#include <stdio.h>
int main()
{
    float b, h, A;
    printf("\n Enter the values of hight and base of triangle");
    scanf("%f%f", &b, &h);
    A = b * h / 2;
    printf("\n The area of triangle is %f", A);

    return 0;
}