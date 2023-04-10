#include <stdio.h>
#include <string.h>
int main()
{
   char str1[1000],str2[1000];

    printf("Enter The String You Want To Copy : ");
    gets(str1);
    strcpy(str2,str1);
	printf("Copied String : %s\n",str2);

    return 0;

}
