#include <stdio.h>
int main()
{
    int t, x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count = 0, flag = 0, zero = 0;
        scanf("%d", &x);
        int k = 2;
        while (k <= x)
        {
            for (int i = 2; i < k; i++)
            {
                if (k % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                while (k > 0)
                {
                    if (k % 10 == 0)
                    {
                        zero = 1;
                        break;
                    }
                }
                if (zero == 0)
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
}