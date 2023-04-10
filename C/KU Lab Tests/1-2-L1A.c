#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000], s1[1000][1000];
    printf("Enter the string : ");
    gets(s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 32)
            int pos = i;
        for (int j = 0, k = 0;; k++)
        {
            int d = s[i];
            s1[j][k] = d;
        }
    }

    return 0;
}