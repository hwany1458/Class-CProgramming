#include <stdio.h>
int main(void)
{
 char str[10] ;
 printf("문자열 입력 후 Enter>");
 scanf("%s", str);
 printf("입력된 문자열:%s\n",str); 
 printf("str[3]=%c \n",str[3] );
 return 0;
}
