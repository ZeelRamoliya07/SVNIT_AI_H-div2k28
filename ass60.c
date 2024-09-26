// PROGRAM TO SORT (SELECTION SORT) AN ARRAY
#include <stdio.h>
int main()
{
    int n, m_ind;

    printf("Enter the Number of Terms :");
    scanf("%d", &n);

    int a[n], b[n];

    printf("Enter the Elements :");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        m_ind = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[m_ind] > a[j])
            {
                m_ind = j;
            }
        }
        if (m_ind != i)
        {
            int temp = a[m_ind];
            a[m_ind] = a[i];
            a[i] = temp;
        }
    }

    printf("The Sorted Array is :");
    for (int z = 0; z < n; z++)
    {
        printf("%d ", a[z]);
    }
    return 0;
}