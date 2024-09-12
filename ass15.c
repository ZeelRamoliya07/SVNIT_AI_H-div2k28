// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION
#include <stdio.h>
int main()
{
    float q, w, e, r, t, a;
    printf("\n Enter marks of 5 subjects out of 100 \n");
    scanf("%f%f%f%f%f", &q, &w, &e, &r, &t);
    a = (q + w + e + r + t) / 5;
    if (a >= 80 && a <= 100)
    {
        printf("student got A divison");
    }
    else if (a >= 70 && a <= 79)
    {
        printf("student got B division");
    }
    else if (a >= 60 && a <= 69)
    {
        printf("student got C division");
    }
    else if (a >= 50 && a <= 59)
    {
        printf("student got D division");
    }
    else if (a >= 40 && a <= 49)
    {
        printf("student got E division");
    }
    else if (a >= 35 && a <= 39)
    {
        printf("student got F division");
    }
    else if (a < 35 || a > 100)
    {
        printf("Enter valid marks ");
    }
    else
    {
        printf("student got FAILED");
    }

    return 0;
}