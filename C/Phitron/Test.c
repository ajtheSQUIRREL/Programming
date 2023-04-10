#include <stdio.h>
#include <string.h>
int main()
{
    int n, x = 0, count[26] = {0};
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            count[arr[i] - 'a']++;
        }
        else
        {
            count[arr[i] - 'A']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] == 0)
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}