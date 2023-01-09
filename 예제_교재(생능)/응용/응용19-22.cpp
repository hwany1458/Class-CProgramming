#include<stdio.h>
#include<math.h>
int main(void)
{
  int a[ ]={26, 28, 30, 35, 35, 30,
             29, 39, 60, 31, 38, 36,
             33, 24, 34, 40, 29, 41,
	     40, 29, 30, 44, 32, 65,
	     35, 26, 38, 36, 37, 35};
  int n=sizeof(a)/sizeof(int), i;
  double sum=0, mean, var;
  for(i=0;i<n;i=i+1)
	 sum+=a[i];
  mean=sum/n;	
  sum=0;
  for(i=0;i<n;i=i+1)
    sum+=(a[i]-mean)*(a[i]-mean);
  var=sum/(n-1);
  printf("평균    = %8.3f\n",mean);
  printf("분산    = %8.3f\n",var);
  printf("표준편차= %8.3f\n",sqrt(var));
  return 0;
}
