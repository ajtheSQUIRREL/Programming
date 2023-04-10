#include <stdio.h>
int main()
{
    int a, b, c, d = 0, i;
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        scanf("%d %d", &b, &c);
        if (c - b >= 2)
            d++;
    }
    printf("%d", d);
}