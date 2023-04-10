#include <stdio.h>
int main()
{
    int n1, n2, sum = 0;
    printf("Enter The Last Two Digits : ");
    scanf("%d %d", &n1, &n2);
    for (int i = 1, j = 2; i <= n1, j <= n1 + 1; i++, j++)
    {
        sum += (i * j);
    }
    printf("Sum Of The Series : %d", sum);
}