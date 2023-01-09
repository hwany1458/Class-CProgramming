#include<time.h>
#include<stdio.h>
int main(void)
{
  time_t curr;
  struct tm *d;
  curr=time(NULL);
  d=localtime(&curr);
  printf("현재날짜\n");
  printf("%d년%d월%d일\n",d->tm_year+1900, d->tm_mon+1, d->tm_mday);
  printf("현재시간\n");
  printf("%d시%d분%d초\n",d->tm_hour, d->tm_min, d->tm_sec);
  return 0;
}
