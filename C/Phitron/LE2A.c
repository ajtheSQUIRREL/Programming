#include <stdio.h>
int main()
{
    int n, k, a, i;
    scanf("%d %d %d", &n, &k, &a);
    for (i = a;; i++)
    {
        if (i == n)
            i = 0;
        k--;
        if (k == 0)
            break;
    }
    if (i == 0)
    {
        printf("%d", n);
    }
    else
    {
        printf("%d", i);
    }
}