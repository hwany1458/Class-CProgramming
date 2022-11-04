#include <stdio.h>
int main(void)
{
 char str[20];
 printf("문자열을 입력하고 Enter>");
 gets(str);
 printf("입력된  문자열  : %s \n", str);
 return 0;
}
