#include<time.h>
#include<stdio.h>
int main(void)
{
 time_t start, end;
 double i, pst, sum=0;
 start = time(NULL);
 for(i=0;i<30000000;i++)
   sum+=i;
 end=time(NULL);
 pst=difftime(end, start);
 printf("time: %f\n",pst);
 return 0;
}
