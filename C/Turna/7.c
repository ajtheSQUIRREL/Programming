#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter The Lower Limit : ");
    scanf("%d",&m);
    printf("Enter The Upper Limit : ");
    scanf("%d",&n);
    printf("All The Prime Numbers : \n");
    for(;m<=n;m++)
    {
        int i=2,z=1;
        while(i<m)
        {
            if(m%i==0)
                {
                    z=0;
                    break;
                }
            i++;
        }
        if(z)
            printf("%d\n",m);
    }
}


