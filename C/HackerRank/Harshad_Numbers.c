#include <stdio.h>
int main()
{
    int x, y = 0;
    scanf("%d", &x);
    int z = x;
    while (x != 0)
    {
        y += (x % 10);
        x /= 10;
    }
    if (z % y == 0)
        printf("YES");
    else
        printf("NO");
}