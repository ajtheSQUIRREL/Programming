#include <stdio.h>
int main()
{
    int arr1[100], Z = 0;
    int i, j, k;
    printf("Input 100 elements in the array : ");
    for (i = 0; i < 100; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < 100; i++)
    {
        Z = 0;
        for (j = 0, k = 100; j < k + 1; j++)
        {
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    Z++;
                }
            }
        }
        if (Z == 0)
        {
            printf("%d ", arr1[i]);
        }
    }
}