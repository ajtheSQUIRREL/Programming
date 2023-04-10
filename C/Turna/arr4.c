#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    int arr[n];
    int count[10]={0};
    printf("Enter The Elements Of The Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        count[arr[i]]++;
    }
        for(int i=0;i<10;i++)
    {
        printf("Frequency of %d Is %d\n",i,count[i]);
    }
    return 0;
}
