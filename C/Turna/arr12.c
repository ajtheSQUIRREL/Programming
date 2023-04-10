#include <stdio.h>
int main()
{
   int a[2][2]={1,2,2,4}, transpose[2][2];
   for (int i = 0; i < 2; ++i)
   {
        for (int j = 0; j < 2; ++j)
            {
                transpose[j][i] = a[i][j];
            }
   }
   printf("\nTranspose of the matrix:\n");
   for (int i = 0; i < 2; ++i)
  {
    for (int j = 0; j < 2; ++j)
    {
        printf("%d  ", transpose[i][j]);
        if (j == 1)
        printf("\n");
    }
  }
    return 0;
}
