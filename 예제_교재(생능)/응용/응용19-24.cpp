#include<stdio.h>
#include<math.h>
int main(void)
{
  int a[ ]={26, 28, 30, 35, 35, 30,
             29, 39, 60, 31, 38, 36,
             33, 24, 34, 40, 29, 41,
	     40, 29, 30, 44, 32, 65,
	     35, 26, 38, 36, 37, 35} ;
  int n=sizeof(a)/sizeof(int), freq;
  int i,j,k,k1,k2,b[10][10]={0};
  for(i=0;i<n;i=i+1)
  {
    k1=a[i]/10;
    k2=a[i]%10;
    b[k1][k2]+=1;
  }
  for(i=0;i<10;i++)
  {
     freq=0;
     printf("%2d*  ",i);
     for(j=0;j<10;j++)
       freq+=b[i][j];
     printf("(%2d) ", freq);
     for(j=0;j<10;j++)
         for(k=0;k<b[i][j];k++)
	      printf("%d",j);
    printf("\n");
  }
 return 0;
}
