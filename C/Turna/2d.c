#include <stdio.h>
int main()
{
    int n;
    double sum = 0;
    printf("Enter The Last Digit : ");
    scanf("%d", &n);
    for (double i = 1; i <= n; i++)
    {
        sum += (1 / i);
    }
    printf("Sum Of The Series is : %lf", sum);
}