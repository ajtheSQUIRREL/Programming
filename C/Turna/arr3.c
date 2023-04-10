#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Elements Of The Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter Which Element You Want To Search In The Array : ");
    scanf("%d",&x);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            printf("Found And The Index Is %d",i);
            return 0;
        }
    }
    printf("Not Found");
    return 0;
}
