#include <stdio.h>

// this function inserts the elements in ascending order in an array.
void function1(int *arr, int c, int element)
{
    int i = 0, j = 0;
    for (i = c - 1; i >= 0; i--)
    {
        if (element >= arr[i])
        {
            break;
        }
    }
    // shifting
    for (j = c - 1; j >= i + 1; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[i + 1] = element;

    printf("\n");

    for (i = 0; i < c + 1; i++)
    {
        printf(" %d ", arr[i]);
    }
}

// write function that will insert an element in an array in descending order.
void function2(int *arr2, int c, int element)
{
    int i = 0, j = 0;
    for (i = 0; i < c; i++)
    {
        if (element >= arr2[i])
        {
            break;
        }
    }
    // shifting
    for (j = c; j >= i; j--)
    {
        arr2[j + 1] = arr2[j];
    }
    arr2[i] = element;

    printf("\n");

    for (i = 0; i < c + 1; i++)
    {
        printf(" %d ", arr2[i]);
    }
}

int main(void)
{
    int arr1[100] = {1, 2, 5, 9, 10, 16, 58};
    int arr2[100] = {58, 16, 10, 9, 5, 2, 1};
    function1(arr1, 7, 1);

    // call your function here.
    function2(arr2, 7, 8);
    return 0;
}
