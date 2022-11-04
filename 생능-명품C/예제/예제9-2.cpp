#include <stdio.h>
void main()
{
 int i;
 for(i=1;i<=10;i+=1)
 {
  if (i%2==0) 
     continue;
  printf("%d ", i);
 }
}
