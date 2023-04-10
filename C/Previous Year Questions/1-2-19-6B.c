#include <stdio.h>
int main()
{
    FILE *file1 = fopen("number.txt", "r");
    FILE *file2 = fopen("prime.txt", "a");
    int i = 0;
    while (!feof(file1))
    {
        int flag;
        fscanf(file1, "%d", &i);
        for (int j = 2; j < i; j++)
        {
            flag = 1;
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            fprintf(file2, "%d\n", i);
    }
    fclose(file1);
    fclose(file2);
}