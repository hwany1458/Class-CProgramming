#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 char *str;
 str = (char *) malloc(20);
 printf("문자열을 입력하고 Enter>");
 scanf("%s", str);
 printf("입력된  문자열  : %s \n", str);
 free(str);
 return 0;
}
