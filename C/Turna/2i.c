#include <stdio.h>
int main()
{
    int n, sum = 0, x = 1;
    printf("Enter The Last Digit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
            continue;
        sum += i;
    }
    printf("Sum Of The Series is : %d", sum);
}