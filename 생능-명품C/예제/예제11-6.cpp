#include <stdio.h>
int main(void)
{
 register i;
 double sum=0;
 for(i=1; i<=30000; i++)
   sum+=i;
 printf("1+2+...+29999+30000=%lf\n", sum);
 return 0;
}
