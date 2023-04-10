#include <stdio.h>
int main()
{
    int x, y, count = 1, temp = 0, tc = 0;
    ;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &y);
        if (i == 0)
            temp = y;
        else
        {
            if (y >= temp)
            {
                count++;
                tc = count;
            }
            else
                count = 1;
            if (count > tc)
                tc = count;
            temp = y;
        }
    }
    printf("%d\n", tc);
}