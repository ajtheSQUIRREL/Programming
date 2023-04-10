#include <stdio.h>
int main()
{
    int n, x, y, min, max;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x % 4 == 0 && x % 6 == 0)
        {
            max = x / 4;
            min = x / 6;
        }
        else if (x % 4 == 0 && x % 6 != 0)
        {
            max = x / 4;
            y = x % 6;
            if (y < 6 && y != 4)
                printf
        }
    }
}