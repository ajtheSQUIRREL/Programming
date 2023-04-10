#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    char s[101];
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        scanf("%s", s);
        int count = 0;
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
            }
            if (count >= 4)
            {
                flag = 0;
                break;
            }
        }
        printf("%s\n", (flag) ? "YES" : "NO");
    }
    return 0;
}