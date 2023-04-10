#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n + 1];
    gets(arr);
    int count[] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    printf("%d", count);
}