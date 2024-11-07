// WRITE A FUNCTION THAT RETURN 1 IF ITS ARGUMENT IS PRIME NUMBER AND RETURN ZERO OTHERWISE.
#include <stdio.h>
int prime(int num)
{

    if (num <= 0)
    {
        printf("The number you have entered is not valid \n");
    }
    if (num == 1)
    {
        printf("The number you have entered is unique no. \n");
    }
    if (num > 1)
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                printf("The number you have entered is not a prime number \n");
                return 1;
            }
        }
        printf("The number you have entered is prime number \n");
    }
    return 0;
}
int main()
{
    int num;
    printf("Enter any number \n");
    scanf("%d", &num);
    prime(num);
}
