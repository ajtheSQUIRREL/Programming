#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100000],ch;
    printf("Enter The String : ");
    gets(str);
    printf("Enter The Character You Want To Find : ");
    scanf("%c",&ch);
    int i=0;
    while(str[i]!='\0')
    {
        int x=str[i],y=ch;
        if(x==ch)
        {
            printf("%c Is Found At Index %d",ch,i);
            return 0;
        }
        i++;
    }
    printf("Not Found");
    return 0;
}
