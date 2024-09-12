// PROGRAM TO READ THREE NOS. AND PRINT MAX
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter the values of a,b,c \n");
    scanf("%f%f%f", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Max no is -->%f", a);
        }
        else
        {
            printf("Max no is -->%f", c);
        }
    }
    if (b > c)
    {
        printf("Max no is -->%f", b);
    }
    else
    {
        printf("Max no is -->%f", c);
    }

    return 0;
}