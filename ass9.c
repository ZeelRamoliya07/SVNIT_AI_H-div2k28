// PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND
#include <stdio.h>
int main()
{
    float h, m, s, ts;
    printf("\n write time in the hhmmss formate \n");
    scanf("%f%f%f", &h, &m, &s);
    ts = (h * 3600) + (m * 60) + s;
    printf("\n total seconds converted are %f", ts);

    return 0;
}