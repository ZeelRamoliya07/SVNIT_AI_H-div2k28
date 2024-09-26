// PRINTING
//  A
//  BB
//  CCC
//  DDDD
//  EEEEE
#include <stdio.h>
int main()
{
    int ch;
    for (int i = 65; i < 70; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c", i);
        }
        printf("\n");
    }
    return 0;
}