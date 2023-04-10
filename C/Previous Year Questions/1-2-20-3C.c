#include <stdio.h>
#include <string.h>
void revstr(char *p)
{
    int i, len, temp;
    len = strlen(p);
    for (i = 0; i < len / 2; i++)
    {
        temp = p[i];
        p[i] = p[len - i - 1];
        p[len - i - 1] = temp;
    }
}
int main()
{
    char str[100];
    gets(str);
    revstr(str);
    printf("\n");
    puts(str);
}