#include <stdio.h>
static int gcnt;
void count(void);
int main(void)
{
 int i;
 for(i=1;i<=3;i++)
 {
    count();
    gcnt+=1;
 }
 return 0;
}
void count(void)	
{
  static int stcnt;
  stcnt+=1;
  gcnt+=1;
  printf("local count=%d, global count=%d\n", stcnt, gcnt);
}
