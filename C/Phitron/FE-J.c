#include <stdio.h>
#include <string.h>
struct name
{
    char fam[25];
    char giv[25];
};
int main()
{
    int n;
    scanf("%d", &n);
    struct name N[2000];
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s", &N[i].fam, &N[i].giv);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (!(strcmp(N[i].fam, N[j].fam) || strcmp(N[i].giv, N[j].giv)))
            {
                printf("Yes");
                return 0;
            }
        }
    }
    printf("No");
}