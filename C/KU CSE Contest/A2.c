#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    for (int i = 1; i <= z; i++)
    {
        y -= i * x;
    }
    if (y < 0)
        y *= -1;
    else
        y = 0;
    printf("%d\n", y);
}