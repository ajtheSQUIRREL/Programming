#include<stdio.h>
int main()
{
    int  n;
    float sum=0,avg;
    printf("Enter The Size Of The 2D Array : ");
    scanf("%d",&n);
    int arr[n][n];
    printf("Enter The Elements Of The Array : ");
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d", &arr[i][j]);
            sum+=arr[i][j];
        }
    }
    avg=sum/(n*n);
    printf("The Sum Of The Array Is %f\n The Average Of The Array Is %f",sum,avg);
    return 0;
}
