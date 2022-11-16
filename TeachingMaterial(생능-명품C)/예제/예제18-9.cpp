#include<stdio.h>
#define LEVEL 1
int main(void)
{
#if (LEVEL>1)
  printf("전문가용 프로그램\n");
#else
  printf("초보자용 프로그램\n");
#endif
}
