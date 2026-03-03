#include <stdio.h>
int main(void)
{
 char a[5]="copy";
 char *pt;
 pt=a;
 printf("배열의 시작주소 : %u\n", pt);
 printf("배열의 시작주소 : %u\n", a);
 return 0;
}
