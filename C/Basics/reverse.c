#include <stdio.h>
int main()
{
    int x, y, z = 0, n;
    scanf("%d", &x);
    while (x > 0)
    {
        y = x % 10;
        x /= 10;
        z = z * 10 + y;
    }
    printf("%d", z);
}