#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch, str[100], str2[100], str3[100];
    gets(str);
    int count = 0;
    FILE *p1, *p2, *p3, *p4;
    p1 = fopen("input.txt", "w");
    fprintf(p1, "%s", str);
    fclose(p1);

    p2 = fopen("input.txt", "r");
    while (fscanf(p2, "%s", str2) != EOF)
    {
        count++;
        printf("%s ", str2);
    }
    fclose(p2);
    printf("\nNumber of words = %d\n", count);

    p3 = fopen("input.txt", "r");
    p4 = fopen("vowelstart.txt", "w");
    p2 = fopen("consonantstart.txt", "w");
    while (fscanf(p3, "%s", str2) != EOF)
    {
        if (str2[0] == 'A' || str2[0] == 'a' || str2[0] == 'E' || str2[0] == 'e' || str2[0] == 'I' || str2[0] == 'i' || str2[0] == 'O' || str2[0] == 'o' || str2[0] == 'U' || str2[0] == 'u' && str2[0] != '0' && str2[0] != '1' && str2[0] != '2' && str2[0] != '3' && str2[0] != '4' && str2[0] != '5' && str2[0] != '6' && str2[0] != '7' && str2[0] != '8' && str2[0] != '9')
        {
            fputs(str2, p4);
            fputc(' ', p4);
        }
        else if (str2[0] != '0' && str2[0] != '1' && str2[0] != '2' && str2[0] != '3' && str2[0] != '4' && str2[0] != '5' && str2[0] != '6' && str2[0] != '7' && str2[0] != '8' && str2[0] != '9')
        {
            fputs(str2, p2);
            fputc(' ', p2);
        }
    }
    fclose(p3);
    fclose(p4);
    fclose(p2);

    count = 0;
    p3 = fopen("input.txt", "r");
    p4 = fopen("integers.txt", "w");
    while (fscanf(p3, "%s", str2) != EOF)
    {
        int len = strlen(str2);
        for (int i = 0; i < len; i++)
        {
            ch = str2[i];
            if (ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9')
            {
                count++;
            }
        }
        if (count == len)
        {
            fputs(str2, p4);
            fputc(' ', p4);
        }
    }
    fclose(p2);
    fclose(p1);

    count = 0;
    p1 = fopen("input.txt", "r");
    p2 = fopen("floats.txt", "w");
    while (fscanf(p1, "%s", str2) != EOF)
    {
        int len = strlen(str2);
        for (int i = 0; i < len; i++)
        {
            ch = str2[i - 1];
            if (ch == '.')
            {
                fputs(str2, p2);
                fputc(' ', p2);
            }
        }
    }
    fclose(p1);
    fclose(p2);
}