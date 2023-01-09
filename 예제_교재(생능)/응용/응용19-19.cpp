#include<stdio.h>
int main(void)
{
  int a[ ]={26, 28, 30, 35, 35, 30,
	    29, 39, 60, 31, 38, 36,
            33, 24, 34, 40, 29, 41,
            40, 29, 30, 44, 32, 65,
            35, 26, 38, 36, 37, 35} ;
  int n=sizeof(a)/sizeof(int);
  int i,j, mode, freq, count=1;
  for(i=0;i<n;i++)
  {freq=1;
    for(j=i+1;j<n;j++)
       if (a[i]==a[j])
	    freq+=1;
    if (freq>=count)
	{ mode=a[i];
	  count=freq;
	}
  }
 printf("mode =%d , freq = %d \n", mode, count);
 return 0;
}
