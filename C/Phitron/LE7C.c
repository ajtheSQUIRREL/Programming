#include <stdio.h>
#include <string.h>
int main()
{
    int count[10] = {0};
    char arr[2000];
    gets(arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] >= 48 && arr[i] <= 57)
            count[arr[i] - 48]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", count[i]);
    }
}