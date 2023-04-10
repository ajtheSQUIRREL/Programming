#include <stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 9, j = 0; j <= i; i--, j++)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}