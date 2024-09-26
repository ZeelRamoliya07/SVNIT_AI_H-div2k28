// WRITE A PROGRAM IN C FOR AN ELECTRIC DISTRIBUTION COMPANY CHARGES ITS DOMESTIC CONSUMERS.
#include <stdio.h>
int main()
{
    int unit, cost = 0;
    printf("ENTER THE NUMBER OF UNITS \n");
    scanf("%d", &unit);
    if (unit <= 200)
    {
        cost = unit * 0.5;
    }
    if (unit > 200 && unit <= 400)
    {
        cost = 100 + (unit - 200) * 0.65;
    }
    if (unit > 400 && unit <= 600)
    {
        cost = 230 + (unit - 400) * 0.80;
    }
    if (unit > 600)
    {
        cost = 425 + (unit - 600) * 1.25;
    }
    printf("THE ELECTRICITY BILL IS : %d", cost);

    return 0;
}