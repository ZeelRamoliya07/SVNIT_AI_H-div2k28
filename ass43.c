// WRITE A C PROGRAM TO CALCULATE THE COMMISSION FOR A SALES REPRESENTATIVE AS PER THE SALES AMOUNT
#include <stdio.h>
int main()
{
    int sales, com = 0;
    printf("ENTER THE SALES AMOUNT \n");
    scanf("%d", &sales);
    if (sales <= 500)
    {
        com = sales * 0.05;
    }
    if (sales > 500 && sales <= 2000)
    {
        com = 35 + (sales - 500) * 0.10;
    }
    if (sales > 2000 && sales <= 5000)
    {
        com = 185 + (sales - 2000) * 0.12;
    }
    if (sales > 5000)
    {
        com = sales * 0.125;
    }
    printf("COMISSION IS : %d ", com);

    return 0;
}
