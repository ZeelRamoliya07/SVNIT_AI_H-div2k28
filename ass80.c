// WRITE A FUNCTION THAT WILL GENERATE AND PRINT THE FIRST N FIBONACCI NUBERS.TEST THE FUNCTION FOR N=5,10,AND 15.
#include <stdio.h>
int fibonacci(int n)
{
    int t1 = 0, t2 = 1, nt;

    printf("%d\t%d\t", t1, t2);
    nt = t1 + t2;
    printf("%d\t", nt);
    for (int i = 3; i < n; i++)
    {
        t1 = t2;
        t2 = nt;
        nt = t1 + t2;
        printf("%d\t", nt);
    }
    return 1;
}
int main()
{
    int n;
    printf("Enter how many numbers you want to write \n");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}