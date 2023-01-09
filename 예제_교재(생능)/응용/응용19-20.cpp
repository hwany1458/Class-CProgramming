#include<stdio.h>
int main(void)
{
  int a[ ]={26, 28, 30, 35, 35, 30,
             29, 39, 60, 31, 38, 36,
             33, 24, 34, 40, 29, 41,
	     40, 29, 30, 44, 32, 65,
	     35, 26, 38, 36, 37, 35};
  int n=sizeof(a)/sizeof(int);
  double median;
  int i, j, temp;
  for(i=0;i<n-1;i++)
     for(j=0;j<n-i-1;j++)
     { if (a[j+1]<a[j])
	  { temp=a[j];
	    a[j]=a[j+1];
            a[j+1]=temp;
	  }
      }
  if (n/2==0)
    median=(a[n/2]+a[n/2+1])/2;
  else
    median=a[(n+1)/2];
  printf("median = %f\n", median);
  return 0;
}
