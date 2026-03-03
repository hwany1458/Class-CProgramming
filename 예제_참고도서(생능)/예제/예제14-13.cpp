#include <stdio.h>
char *string_cpy(char *dest, const char *src);
int main(void)
{
 char str[20];
 char *pt;
 pt=string_cpy(str, "my program");
 printf("str : %s \n", str);
 printf("pt : %s \n", pt);
 return 0;
}
char *string_cpy(char *dest, const char *src)
{
  char *p=dest;
  while(*src)
    *p++=*src++;
   *p=NULL;
   return dest;
}
