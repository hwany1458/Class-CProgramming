#include <stdio.h>
void main()
{
 int sum=-1;
 for(int x1=50, x2=100; sum<0 ;x1+=4,x2-=6)
 {
   sum=2*x1-4*x2+10;
   printf("x1=%d, x2=%d, sum=%d\n",x1,x2,sum);
 }
}
