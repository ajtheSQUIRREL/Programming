#include <stdio.h>
#include<string.h>
int main()
{
  char str[100000];
  printf("Enter The String : ");
  gets(str);
  int l = strlen(str);
  printf("Length Of The String Is %u", l);
  return 0;
}
