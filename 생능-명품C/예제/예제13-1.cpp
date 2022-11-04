#include <stdio.h>
int main(void)
{
 int n[]={1, 2, 3, 4, 5}, i;
 for(i=0;i<5;i+=1)
  printf("%d: %d\n", i, n[i]);
 return 0;
}
