// EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES
#include <stdio.h>
int main()
{
    float d, h, m;
    d = 31558150 / 86400;
    h = d * 24;
    m = h * 60;
    printf("\n the value od days is %f \n values of hours is %f \n values of minutes is %f", d, h, m);

    return 0;
}