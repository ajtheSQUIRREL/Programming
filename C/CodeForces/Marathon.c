#include <stdio.h>
int main()
{
    int test, count = 0;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int a, b, c, d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (b > a)
            count++;
        if (c > a)
            count++;
        if (d > a)
            count++;
        printf("%d\n", count);
        count = 0;
    }
}