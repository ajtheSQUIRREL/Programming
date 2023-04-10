#include <stdio.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        int n, count[20000] = {0};
        scanf("%d", &n);
        int arr[n], size = 0, check = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            count[arr[i]]++;
        }
        for (int i = 0; i < 20000; i++)
        {
            if (count[i] == 2)
                check++;
            else if (count[i] > 0)
            {
                check = 0;
                break;
            }
        }
        if (check == 0)
        {
            for (int i = 0; i < 20000; i++)
            {
                if (count[i] > 2)
                    size++;
                else if (count[i] == 1)
                    size++;
            }
        }
        else if (check > 0)
        {
            if (check % 2 == 0)
                size = check;
            else
                size = check - 1;
        }
        printf("%d\n", size);
    }
}
