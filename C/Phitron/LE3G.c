#include <stdio.h>
#include <string.h>
int main()
{ // AJ
    char a[100], b[100];
    int i, n, q, z;
    scanf("%d", &z);
    getchar();
    while (z--)
    {
        gets(b);
        n = strlen(b);
        a[0] = b[0];
        for (i = 1, q = 1; i < n - 1; i++)
        {
            if (b[i] != b[i + 1])
                a[q++] = b[i];
            else if (b[i] == b[i + 1])
            {
                a[q++] = b[i];
                i++;
            }
        }
        a[q++] = b[n - 1];
        a[q] = '\0';
        puts(a);
    }
}