#include <stdio.h>
int main(void)
{
 char str1[]="copy";
 char *str2 ="text";
 printf("str1의 주소: %u \n", str1);
 printf("str2에 저장된 주소: %u \n", str2);
 printf("str1[2]에 저장된 값: %c \n", str1[2]);
 printf("str2+2의 값: %c \n", *(str2+2));
 printf("문자열 str1: %s \n", str1);
 printf("문자열 str2: %s \n", str2);
 return 0;
}
