#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    if (strlen(str) == 1)
    {
        puts(str);
        return 0;
    }
    else
        for (int i = 0; i < strlen(str) - 2; i += 2)
        {
            for (int j = i + 2; j < strlen(str); j += 2)
            {
                int x = str[i], y = str[j];
                if (x > y)
                {
                    char temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    puts(str);
}