#include <stdio.h>
int main()
{
    int arr[10], sum = 0;
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int avg = sum / 10;
    printf("%d", avg);
}