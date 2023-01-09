#include <stdio.h>
int main(void)
{
 int a[3]={10, 20, 30};
 int *pt;
 pt=a;
 printf("배열 이름   : %u\n", a);
 printf("포인터 주소 : %u\n", &pt);
 printf("포인터의 값 : %u\n", pt);
 printf("*pt의 값   : %d\n", *pt);
 pt++;
 printf("포인터의 값 : %u\n", pt);
 printf("*pt의 값 : %d\n", *pt);
 return 0;
}
