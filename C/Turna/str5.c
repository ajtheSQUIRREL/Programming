#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main()
{
    char str[10000];
    printf("Enter The String : ");
    gets(str);
    int count=0;
    for(int i=0;i<strlen(str);i++)
    {
        if (isalnum(str[i]))
            count++;
    }
    printf("Total Alphanumeric Characters In The String Is %d",count);
    return 0;
}
