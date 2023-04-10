#include <stdio.h>
#include <string.h>
int main()
{
    int m, n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        char str[m + 1];
        int x = 0;
        scanf(" %s", str);
        for (int i = 0; i < m; i++)
        {
            if (str[i] == '8')
            {
                x = m - i;
                break;
            }
        }
        if (x >= 11)
            printf("YES\n");
        else
            printf("NO\n");
    }
}