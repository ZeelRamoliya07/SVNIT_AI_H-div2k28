// PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include <stdio.h>
int main()
{
    int ts, h, m, s;

    printf("Enter the total number of seconds: ");
    scanf("%d", &ts);
    h = ts / 3600;
    m = (ts % 3600) / 60;
    s = ts % 60;
    printf("%d hours, %d minutes, and %d seconds\n", h, m, s);

    return 0;
}