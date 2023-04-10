#include <stdio.h>
int main()
{
    int a, b, x;
    printf("Number Of Elements In First Array : ");
    scanf("%d", &a);
    printf("Number Of Elements In Second Array : ");
    scanf("%d", &b);
    int arr[a], arr2[b], arr3[a + b], arr4[a + b];
    printf("Elements Of First Array : ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Elements Of Second Array : ");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < a; i++)
    {
        arr3[i] = arr[i];
    }
    for (int i = a, j = 0; j < b; i++, j++)
    {
        arr3[i] = arr2[j];
    }
    for (int i = 0; i < a + b; i++)
    {
        for (int j = i + 1; j < a + b; j++)
        {
            if (arr3[i] > arr3[j])
            {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }
    for (int i = 0; i < a + b; i++)
    {
        printf("%d ", arr3[i]);
    }
}