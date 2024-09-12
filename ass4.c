// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES
#include <stdio.h>
int main()
{
    float fe, c;
    printf("\n Enter the temperature in fahrenhit");
    scanf("%f", &fe);
    c = (fe - 32) * 5 / 9;
    printf("\n the temperature in centigrade is %f", c);

    return 0;
}