#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, x = 0, y = 0, z, i;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &z);
    for (i = 0; i <= z; i = i + a + c)
    {
        if (z - i < a)
            x = x + z - i;
        else
            x = x + a;
    }
    for (i = 0; i <= z; i = i + d + f)
    {
        if (z - i < d)
            y = y + z - i;
        else
            y = y + d;
    }
    if (x * b == y * e)
        printf("Draw");
    else if (x * b > y * e)
        printf("Takahashi");
    else
        printf("Aoki");
}