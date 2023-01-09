#include <stdio.h>
int main(void)
{
 int a[3]={10, 20, 30};
 int *pt;
 pt=a;
 printf("배열 이름    : %u\n", a);
 printf("a[0]의 주소 : %u\n", &a[0]);
 printf("a[1]의 주소 : %u\n", &a[1]);
 printf("a[2]의 주소 : %u\n", &a[2]);
 printf("a[0]의 값   : %d\n", a[0]);
 printf("pt가 가리키는 곳의 값: %d\n", *pt);
 return 0;
}
