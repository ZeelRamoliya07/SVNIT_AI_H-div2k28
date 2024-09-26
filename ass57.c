// PROGRAM TO READ N NOS AND FINDOUT MAX AND SECOND MAX.
#include <stdio.h>
int main()
{
    int a, d1 = 0, d2 = 0;
    printf("Enter how many numbers you want to compare \n ");
    scanf("%d", &a);
    int b[a];
    for (int i = 0; i < a; i++)
    {
        printf("Enter the %d number of array", i);
        scanf("%d", &b[i]);
        if (b[i] >= d1)
        {
            d2 = d1;
            d1 = b[i];
        }
        else if (b[i] < d1)
        {
            if (b[i] >= d2)
            {
                d2 = b[i];
            }
        }
    }
    printf("THE MAXIMUM NUMBER IS %d ", d1);
    printf("THE SECOND MAXIMUM NUMBER IS %d", d2);

    return 0;
}