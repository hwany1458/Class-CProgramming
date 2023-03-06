#include <stdio.h>
void main()
{
 int sum=0;
 for(int i=0,j=2;i<=10 && j<=10;i+=2,j+=1)
   sum=sum+i+j;
 printf("sum=%d\n", sum);
}
