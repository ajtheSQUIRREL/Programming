#include <stdio.h>
#include <string.h>
int main()
{
    int m, n;
    char str[1000000];
    scanf("%d %d", &m, &n);
    gets(str);
    gets(str);
    for (int i = m - 1, j = n - 1; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
}