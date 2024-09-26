// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…)
#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, nt, n;
    printf("Enter how many numbers you want to write \n");
    scanf("%d", &n);
    printf("%d\n%d\n", t1, t2);
    nt = t1 + t2;
    printf("%d\n", nt);
    for (int i = 3; i < n; i++)
    {
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
        printf("\n %d", nt);
    }
    return 0;
}