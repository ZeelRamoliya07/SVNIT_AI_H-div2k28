// PRINTING
//     *
//    ***
//   *****
//  *******
// *********
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
                    printf("*");
                }
                for (int t = i - 1; t >= 1; t--)
                {
                    printf("*");
                }
                break;
            }
        }
        printf("\n");
    }

    return 0;
}