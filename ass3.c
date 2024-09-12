// PROGRAM TO CALCULATE GROSS SALARY
#include <stdio.h>
int main()
{
    float gs, bs, hra, oa;
    printf("\n enter basic salary,HRA,other allowances");
    scanf("%f%f%f", &bs, &hra, &oa);
    gs = bs + hra + oa;
    printf("\n The gross salary is=%f", gs);

    return 0;
}