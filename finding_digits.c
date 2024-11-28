#include <stdio.h>

int find_digit(int num);

int main()
{
    int T;
    scanf("%d", &T); 
    int arr[T];
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < T; j++)
    {
        printf("\n%d", find_digit(arr[j]));
    }
}

int find_digit(int num)
{
    int count = 0;
    int o_num = num;
    while (o_num != 0)
    {
        int temp = o_num % 10;
        if (temp != 0)
        {
            if (num % temp == 0)
            {
                count++;
            }
        }
        o_num /= 10;
    }
    return count;
}