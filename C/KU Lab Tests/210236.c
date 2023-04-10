#include <stdio.h>
#include <string.h>
struct strings
{
    char str[100];
};
int main()
{
    struct strings s[100];
    char a[100], b[100];
    printf("Enter The String : ");
    gets(a);
    int i = 0, j = 0, pos;
    while (i >= 0)
    {
        strncpy(b, a, pos);
        if (a[i] == '\0')
            break;
        if (b[i] == 32)
        {
            pos = i;
            b[i] = '\0';
            for (;;)
            {
                strcpy(s[j].str, b);
                j++;
                break;
            }
            i = pos + 1;
        }
        i++;
    }
    puts(s[0].str);
    puts(s[1].str);
}