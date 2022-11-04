#define maximum(x,y) (x > y ? x:y)
#define minimum(x,y) (x > y ? y:x)
#include<stdio.h>
int main(void)
{
  int a[ ]={26, 28, 30, 35, 35, 30,
             29, 39, 60, 31, 38, 36,
             33, 24, 34, 40, 29, 41,
	     40, 29, 30, 44, 32, 65,
	     35, 26, 38, 36, 37, 35};
  int n=sizeof(a)/sizeof(int);
  int i, max, min;
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++)
  {
    max=maximum(max,a[i]);
    min=minimum(min,a[i]);
  }
 printf("Max data = %d\n",max);
 printf("Min data = %d\n",min);
 printf("Range    = %d\n",max-min);
 return 0;
}
