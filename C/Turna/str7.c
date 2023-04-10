#include <stdio.h>
#include <string.h>
int main()
{
   char str1[1000],str2[1000],str3[1000];

    printf("Enter  String 1: ");
    gets(str1);
    printf("Enter  String 2: ");
    gets(str2);
    printf("Enter  String 3: ");
    gets(str3);
    strcat(str1,str2);
    strcat(str1,str3);
	printf("After Adding Three Strings : %s\n",str1);

    return 0;

}
