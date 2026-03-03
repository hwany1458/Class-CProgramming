#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int num1=14;
 long num2=512;
 char s[25];
 itoa(num1, s, 2);
 printf("정수:%d, 2진수문자열:%s\n", num1, s);
 ltoa(num2, s, 16);
 printf("정수:%ld, 16진수문자열:%s\n",num2, s);
 return 0; 
}
