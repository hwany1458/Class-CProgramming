#include <stdio.h>
int main(void)
{
  int k=8;
  int *p;
  p=&k;
  printf("k의 주소: %u\n", &k);
  printf("p의 주소: %u\n", &p);
  printf("p의 값  : %u\n", p);
  printf("p가 가리키는 곳의 값: %d\n", *p);
  return 0;
}
