#include <stdio.h>
int main()
{
    int t, n, count = 0;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        char str[n + 1];
        scanf("%s", str);
        if (n % 2 == 0)
        {
            for (int i = 0, j = n; i < n / 2; i++, j--)
            {
                if (str[i] == str[j])
                    count += 2;
            }
            printf("%d\n", count);
        }
        else if (n % 2 != 0)
        {
            for (int i = 0, j = n; i < (n - 1) / 2; i++, j--)
            {
                if (str[i] == str[j])
                    count += 2;
            }
            printf("%d\n", count);
        }
    }
}