// PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD MATRIX,
#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], sub[3][3];

    printf("Enter the Matrix elements of the First Matrix :");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The First Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Matrix elements of the Second Matrix:");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("The Second Marix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("The Matrix obatined after addition of the 1st and 2nd Matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}