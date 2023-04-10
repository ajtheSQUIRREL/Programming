#include <stdio.h>
#include <string.h>
int main()
{
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        char pos[8][8], s[1];
        int count = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                scanf("%d", &pos[i][j]);
            }
            gets(s);
        }
        int row, col;
        for (row = 0; row < 8; row++)
        {
            for (col = 0; col < 8; col++)
            {
                if (pos[row][col] == '#')
                    count++;
            }
            if (count == 1)
            {
                printf("%d %d\n", row, col);
                break;
            }
        }
        gets(s);
    }
}