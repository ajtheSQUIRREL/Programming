#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i + 1])
            count++;
    }
    printf("%d", count);
}