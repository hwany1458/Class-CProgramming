#include <stdio.h>
int main(void)
{
 int a[3]={10, 20, 30};
 int *pt;
 pt=a;
 printf("배열 이름:%u\n", a);
 printf("a[1]의 주소:%u\n", &a[1]);
 printf("a+1의 값:%u\n", a+1);
 printf("pt+1의 값:%u\n", pt+1);
 printf("a[2]의 값:%d\n", a[2]);
 printf("*(pt+2)의 값:%d\n", *(pt+2));
 printf("*pt+2의 값:%d\n", *pt+2);
 return 0;
}
