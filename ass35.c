// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include <stdio.h>
int main()
{
    int num, sum = 0, rem = 0, rem2 = 0, sum2 = 0;
    printf("Enter any number \n");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    while (sum != 0)
    {
        rem2 = sum % 10;
        sum2 = sum2 + rem2;
        sum = sum / 10;
    }
    printf("SUM OF DIGITS IS %d ", sum2);

    return 0;
}
