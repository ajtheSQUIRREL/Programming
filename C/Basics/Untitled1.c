#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n], count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }
}