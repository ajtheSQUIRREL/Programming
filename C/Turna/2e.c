#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter The Last Digit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum -= i;
        else
            sum += i;
    }
    printf("Sum Of The Series is : %d", sum);
}