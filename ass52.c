// PRINTING
//      1
//     121
//    12321
//   1234321
//  123454321
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j > i)
            {
                printf(" ");
            }
            else
            {
                for (int u = 1; u <= i; u++)
                {
                    printf("%d", u);
                }
                for (int t = i - 1; t >= 1; t--)
                {
                    printf("%d", t);
                }
                break;
            }
        }
        printf("\n");
    }

    return 0;
}