// PROGRAM TO REVERSE AN ARRAY.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements should be in array \n");
    scanf("%d", &n);
    int a[n], b[n];
    printf("Enter the values of elements of an array \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The array you enterd \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    for (int i = 0, j = n - 1; i < n; i++, j--)
    {
        b[j] = a[i];
    }
    printf("\n The new invetred value of that array \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", b[i]);
    }
    return 0;
}