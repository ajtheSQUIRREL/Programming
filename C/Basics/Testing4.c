#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch, s1[300], s2[300], s3[300];
    gets(s1);
    int count = 0;
    FILE *file1, *file2, *file3, *file4;
    file1 = fopen("input.txt", "w");
    fprintf(file1, "%s", s1);
    fclose(file1);

    // number of words
    file2 = fopen("input.txt", "r");
    while (fscanf(file2, "%s", s2) != EOF)
    {
        count++;
        printf("%s ", s2);
    }
    fclose(file2);
    printf("\nNumber of words = %d\n", count);

    file3 = fopen("input.txt", "r");
    file4 = fopen("vowelstart.txt", "w");
    file2 = fopen("consonantstart.txt", "w");
    while (fscanf(file3, "%s", s2) != EOF)
    {
        if (s2[0] == 'A' || s2[0] == 'a' || s2[0] == 'E' || s2[0] == 'e' || s2[0] == 'I' || s2[0] == 'i' || s2[0] == 'O' || s2[0] == 'o' || s2[0] == 'U' || s2[0] == 'u' && s2[0] != '0' && s2[0] != '1' && s2[0] != '2' && s2[0] != '3' && s2[0] != '4' && s2[0] != '5' && s2[0] != '6' && s2[0] != '7' && s2[0] != '8' && s2[0] != '9')
        {
            fputs(s2, file4);
            fputc(' ', file4);
        }
        else if (s2[0] != '0' && s2[0] != '1' && s2[0] != '2' && s2[0] != '3' && s2[0] != '4' && s2[0] != '5' && s2[0] != '6' && s2[0] != '7' && s2[0] != '8' && s2[0] != '9')
        {
            fputs(s2, file2);
            fputc(' ', file2);
        }
    }
    fclose(file3);
    fclose(file4);
    fclose(file2);

    count = 0;
    file3 = fopen("input.txt", "r");
    file4 = fopen("integers.txt", "w");
    while (fscanf(file3, "%s", s2) != EOF)
    {
        int len = strlen(s2);
        for (int i = 0; i < len; i++)
        {
            ch = s2[i];
            if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
            {
                count++;
            }
        }
        if (count == len)
        {
            fputs(s2, file4);
            fputc(' ', file4);
        }
    }
    fclose(file2);
    fclose(file1);

    count = 0;
    file1 = fopen("input.txt", "r");
    file2 = fopen("floats.txt", "w");
    while (fscanf(file1, "%s", s2) != EOF)
    {
        int len = strlen(s2);
        for (int i = 0; i < len; i++)
        {
            ch = s2[i - 1];

            if (ch == '.')
            {
                fputs(s2, file2);
                fputc(' ', file2);
            }
        }
    }
    fclose(file1);
    fclose(file2);
}