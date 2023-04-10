#include <stdio.h>
#include <string.h>
int main()
{
     char str1[1000],str2[1000];

     printf("Enter The String : ");
     gets(str1);
     strcpy(str2,str1);
     strrev(str2);
     if(!strcmp(str1,str2))
 	     printf("The String Is A Palindrome");
     else
         printf("The String Is Not A Palindrome");

     return 0;
}
