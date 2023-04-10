#include <stdio.h>
int main()
{
    int n, a, b, c, x, y, p, q, r;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &x, &y);
        p = x - a;
        q = y - b;
        if (p <= 0 && q <= 0)
            printf("YES\n");
        else if (p >= 0 && q <= 0)
        {
            if (p <= c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if (p <= 0 && q >= 0)
        {
            if (q <= c)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else if (p >= 0 && q >= 0)
        {
            r = p + q;
            if (r <= c)
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
}