#include<time.h>
#include<stdio.h>
int main(void)
{
  time_t curr;
  struct tm *d;
  curr=time(NULL);
  d=localtime(&curr);
  printf("현재 날짜와 시간 : %s\n", asctime(d));
  return 0;
}
