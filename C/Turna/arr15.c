#include<stdio.h>
int main()
{
    int a[2][2]={1,2,1,2},b[2][2]={2,1,2,1},mul[2][2],i,j,k;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<2;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}
