#include <stdio.h>
int main(void)
{
  int k=8, i=3;
  int *p;
  p=&k;
  printf("k의 값: %u\n", k);
  printf("p가 가리키는 곳의 값: %u\n", *p);
  *p=i;
  printf("k의 값: %u\n", k);
  printf("p가 가리키는 곳의 값: %u\n", *p);
  return 0;
}
