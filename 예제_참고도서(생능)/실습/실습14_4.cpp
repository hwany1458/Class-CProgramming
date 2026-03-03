#include <stdio.h>
int main(void)
{
 char a[5]="copy";
 char *pt;
 pt=a;
 printf("%c", *pt);
 pt++;
 printf("%c", *pt);
 pt+=2;
 printf("%c", *pt);
 return 0;
}
