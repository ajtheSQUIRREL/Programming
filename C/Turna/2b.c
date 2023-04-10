#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter The Last Digit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i += 2)
    {
        sum += i * i;
    }
    printf("Sum Of The Series is : %d", sum);
}