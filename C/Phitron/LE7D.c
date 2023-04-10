#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        int n, y = 1;
        scanf("%d", &n);
        int arr[n], count[200001] = {0};
        int temp = -1;
        for (int i = 0; i < n; i++)
        {
            int a = 0;
            scanf("%d", &a);
            count[a]++;
            if (count[a] >= 3)
            {
                temp = a;
            }
        }
        printf("%d\n", temp);
    }
}