#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter The Last Digit : ");
    scanf("%d", &n);
    for (int i = 1, j = 1; i <= n; i++)
    {
        sum += j;
        j += 4;
    }
    printf("Sum Of The Series : %d", sum);
}