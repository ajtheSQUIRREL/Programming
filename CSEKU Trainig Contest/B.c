#include <stdio.h>
int main()
{
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    for (int i = 1; i <= w; i++)
    {
        n -= i * k;
    }
    if (n < 0)
        n *= -1;
    else
        n = 0;
    printf("%d\n", n);
}