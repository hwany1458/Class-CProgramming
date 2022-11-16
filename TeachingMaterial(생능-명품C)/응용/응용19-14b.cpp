#include<time.h>
#include<stdio.h>
int main(void)
{
 clock_t start, end;
 double i, pst, sum=0;
 start=clock();
 for(i=0;i<30000000;i++)
   sum+=i;
 end=clock();
 pst=(double)(end-start)/CLK_TCK;
 printf("time: %f\n",pst);
 return 0;
}
