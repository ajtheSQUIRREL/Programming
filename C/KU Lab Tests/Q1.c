#include <stdio.h>
int main()
{
    int arr[10], sum = 0;
    printf("Enter Ten Numbers : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int avg = sum / 10;
    printf("Numbers Greater Than The Average : ");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > avg)
            printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Numbers Smaller Than Or Equal To The Average : ");
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] <= avg)
            printf("%d ", arr[i]);
    }
    printf("\n");
    int min = arr[0], max = arr[0];
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    printf("Difference Between Highest and Lowest Integer is %d", max - min);
}