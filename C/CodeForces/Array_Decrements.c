#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);
        int a[y], b[y], c[y], count = 0;
        for (int i = 0; i < y; i++)
        {
            scanf("%d", a[i]);
        }
        for (int i = 0; i < y; i++)
        {
            scanf("%d", b[i]);
        }
        for (int i = 0; i < y; i++)
        {
            c[i] = a[i] - b[i];
        }
        for (int i = 0; i < y - 1; i++)
        {
            if (c[i] == c[i + 1])
            {
                count++;
            }
            else
            {
                printf("NO");
                break;
            }
        }
    }
}