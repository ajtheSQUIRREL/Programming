#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    char str[x + 1];
    scanf(" %s", str);
    int z = 0, n = 0;
    for (int i = 0; i < x; i++)
    {
        if (str[i] == 'z')
            z++;
        else if (str[i] == 'n')
            n++;
    }
    for (int i = 0; i < n; i++)
    {
        printf("1 ");
    }
    for (int i = 0; i < z; i++)
    {
        printf("0 ");
    }
}