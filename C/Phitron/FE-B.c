#include <stdio.h>
#include <string.h>
int main()
{
    char ch[51];
    gets(ch);
    int count = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == 'a')
            count++;
    }
    if (count <= strlen(ch) / 2)
        printf("%d", 2 * count - 1);
    else
        printf("%d", strlen(ch));
}