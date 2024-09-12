// WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA CM = M/2+P/2+C/2+E
#include <stdio.h>
int main()
{
    float m, p, c, e, cm;
    printf("Enter marks of maths,physics,chemistry out of 200 and marks of english out of 100");
    scanf("%f%f%f%f", &m, &p, &c, &e);
    cm = (m / 2) + (p / 2) + (c / 2) + e;
    printf("\n cut off mark of a student is %f", cm);

    return 0;
}