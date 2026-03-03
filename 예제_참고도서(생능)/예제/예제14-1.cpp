#include <stdio.h>
int main(void)
{
  char i=3;
  int k=8;
  printf("변수 i의 주소(10진수)>%u\n", &i);
  printf("변수 k의 주소(10진수)>%u\n", &k);
  printf("변수 i의 주소(16진수)>%p\n", &i);
  printf("변수 k의 주소(16진수)>%p\n", &k);
  return 0;
}
