#include <stdio.h>
int main()
{
    int n, x = 0, y = 1;
    scanf("%d", &n);
    if (n == 0 || n == 1)
        printf("Sum = 0");
    else if (n == 2)
        printf("Sum = 1");
    else
    {
        int f = x + y;
        int sum = 1;
        for (int i = 3; i <= n; i++)
        {
            sum += f;
            x = y;
            y = f;
            f = x + y;
        }
        printf("Sum = %d", sum);
    }
}