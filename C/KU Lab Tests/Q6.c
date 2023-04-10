#include <stdio.h>

int main()
{
    int num, check = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    int temp = num;
    while (num > 0)
    {
        int x = num % 10;
        int count = 0;

        for (int i = 2; i < x; i++)
        {
            if (x % i == 0)
                count++;
        }
        if (count != 0)
        {
            check++;
        }
        num /= 10;
    }
    if (check == 0)
        printf("%d Is A Digit Prime", temp);
    else
        printf("%d Is Not A Digit Prime", temp);

    return 0;
}