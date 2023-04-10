#include<stdio.h>
int main()
{
    int n;
    float sum=0,avg;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Elements Of The Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/n;
    printf("SUM = %f\nAVERAGE = %f",sum,avg);
    return 0;
}
