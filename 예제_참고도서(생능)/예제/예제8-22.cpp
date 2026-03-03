#include <stdio.h>
void main()
{ 
  int i;

  for(i=1;i<=9;i+=1)
     printf("%d*%d=%d\n", 1, i, 1*i);

  for(i=1;i<=9;i+=1)
     printf("%d*%d=%d\n", 2, i, 2*i);
}
