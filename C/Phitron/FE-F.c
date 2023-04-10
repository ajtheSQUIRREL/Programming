#include <stdio.h>
int main()
{
    int n, k, x = 1;
    scanf("%d", &n);
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        x = x * 2 < x + k ? x * 2 : x + k;
    }
    printf("%d", x);
}