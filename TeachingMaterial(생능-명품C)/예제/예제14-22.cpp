#include <stdio.h>
int main(void)
{
 char str1[5]="copy";
 const char str2[5]="text";
 const char *ptr;
 str1[0]='a';
 ptr=str1;
 *ptr='b';   //←오류발생
 str2[0]='c'; //←오류발생
 ptr=str2;
 *ptr='d';  //←오류발생
 return 0;
}
