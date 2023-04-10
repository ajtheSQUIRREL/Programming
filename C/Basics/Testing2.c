#include <stdio.h>
void change(int *q)
{
    *q = 6;
}
int main()
{
    int x[5] = {1, 2, 3, 4, 5};
    change(x + 3);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", x[i]);
    }
}
