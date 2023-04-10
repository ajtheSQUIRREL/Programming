#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    int count = 0, x;
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;
            if (count == 6)
            {
                printf("YES");
                break;
            }
        }
        else
            count = 0;
    }
    if (count == 0 || count < 6)
        printf("NO");
}

/**
1 0 0 0 0 1 0 0 0 0 0 0 1 1 0 1 0 1 1 0 0 0 0 0
*/