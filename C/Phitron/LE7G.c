#include <stdio.h>
#include <string.h>
int main()
{
    char str[2000];
    gets(str);
    int x, count = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 104)
        {
            x = i + 1;
            count++;
            break;
        }
    }
    for (int i = x; i < strlen(str); i++)
    {
        if (str[i] == 101)
        {
            x = i + 1;
            count++;
            break;
        }
    }
    for (int i = x; i < strlen(str); i++)
    {
        if (str[i] == 105)
        {
            x = i + 1;
            count++;
            break;
        }
    }
    for (int i = x; i < strlen(str); i++)
    {
        if (str[i] == 100)
        {
            x = i + 1;
            count++;
            break;
        }
    }
    for (int i = x; i < strlen(str); i++)
    {
        if (str[i] == 105)
        {
            x = i + 1;
            count++;
            break;
        }
    }
    if (count == 5)
        printf("YES");
    else
        printf("NO");
}