#include <stdio.h>
void swap2(int *i, int *j);
int main(void)
{
  int i=30, j=80;
  swap2(&i,&j);
  printf("main i=%d j=%d\n",i,j);
  return 0;
}
void swap2(int *j, int *j)
{
  int temp;
  temp=*i;
  *i=*j;
  *j=temp;
  printf("swap i=%d j=%d\n",*i,*j); 
}

