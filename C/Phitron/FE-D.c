#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < x - 1; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        if (arr[i] < 0)
            count++;
    }
    int sum = 0, z;
    if (count > y)
        z = y;
    else
        z = count;
    for (int i = 0; i < z; i++)
    {
        sum += arr[i];
    }
    printf("%d", -sum);
}