#include <stdio.h>
int main()
{
    int n, k = 1;
    printf("Enter Number Of Elements : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter The Elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = k; j < n; j++)
        {
            if (arr[i] == arr[j])
                printf("%d ", arr[j]);
        }
        k++;
    }
}