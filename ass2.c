// PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL AND PERCENTAGE
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5, total, per;
    printf("Enter the values of all subjects");
    scanf("%f%f%f%f%f", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    per = total / 5;
    printf("the total of all sub is %f \n the per of total sub is %f", total, per);

    return 0;
}
