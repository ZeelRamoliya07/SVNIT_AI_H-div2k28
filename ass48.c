// PRINTING
//      1
//     12
//    123
//   1234
//  12345
#include <stdio.h>
int main()
{
    for (int i = 2; i <= 6; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (j < i)
            {
                printf("%d", i - j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}