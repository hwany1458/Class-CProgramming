#include<stdio.h>
int main(void)
{ 
  int a[ ]={26, 28, 30, 35, 35, 30,
          29, 39, 60, 31, 38, 36,
          33, 24, 34, 40, 29, 41,
	  40, 29, 30, 44, 32, 65,
	  35, 26, 38, 36, 37, 35} ;
  int n=sizeof(a)/sizeof(int), i;
  double sum=0;
  for(i=0;i<n;i++)
    sum+=a[i];
  printf("Mean : %f\n", sum/n);
 return 0;
}
