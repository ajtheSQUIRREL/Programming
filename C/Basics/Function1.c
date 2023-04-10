#include <stdio.h>
int check_palindrome(char *arr)
{
    int sz = 0, k = 0;
    while (arr[k] != '\0')
    {
        sz++;
        k++;
    }
    int count = 0;
    for (int i = 0, j = sz - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
            count++;
    }
    return count;
}
int main()
{
    char arr[6] = "wbcea";
    int x = check_palindrome(arr);
    printf("%d", x);
}