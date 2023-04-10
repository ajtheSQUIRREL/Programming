#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    gets(str);
    int sz = strlen(str);
    int count[101] = {0};
    for (int i = 0; i < sz; i++)
    {
        if (str[i] <= 'Z')
            count[i + 1]++;
    }
    int sum = 0;
    for (int i = 1; i <= sz; i++)
    {
        sum += count[i];
    }
    if (sum == sz)
    {
        for (int i = 0; i < sz; i++)
        {
            str[i] += 32;
        }
    }
    else if (sum == sz - 1 && str[0] > 96)
    {
        str[0] -= 32;
        for (int i = 1; i < sz; i++)
        {
            str[i] += 32;
        }
    }
    puts(str);
}