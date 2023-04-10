#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];

   printf("Enter The String : ");
   gets(str);
   strrev(str);
   printf("Reverse Of The String : %s\n", str);

   return 0;
}
