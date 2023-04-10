#include <stdio.h>

int main()
{
    int i, a = 1, x, count = 0;

    while (a <= 1000)
    {
        x = 0;
        i = 2;
        while (i <= a / 2)
        {
            if (a % i == 0)
            {
                x++;
                break;
            }
            i++;
        }
        if (x == 0 && a != 1)
        {
            count++;
        }
        a++;
    }
    printf("Total Prime Numbers From 1 to 1000 is %d", count);
    return 0;
}