#include <stdio.h>
int main(void)
{
 int n[5], i;
 for(i=0;i<=4;i+=1)
 {
  n[i]=i+1;
  printf("%d: %d\n", i, n[i]);
 }
 return 0; 
}
