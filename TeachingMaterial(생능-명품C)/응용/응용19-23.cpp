#include<stdio.h>
#include<math.h>
int main(void)
{
 int a[]={26, 28, 30, 35, 35, 30,
           29, 39, 60, 31, 38, 36,
           33, 24, 34, 40, 29, 41,
           40, 29, 30, 44, 32, 65,
           35, 26, 38, 36, 37, 35};
 int n=sizeof(a)/sizeof(int);
 int i, j, k, freq[10]={0};
 for(i=0;i<n;i=i+1)
 {
     k=a[i]/10;
     freq[k]=freq[k]+1;
 }
  for(i=0;i<10;i=i+1)
  {
     printf("%2d ~ %2d: %2d ",i*10, i*10+9, freq[i]);
     for(j=0;j<freq[i];j=j+1)
         printf("бс");
     printf("\n");
  }
  return 0;
}
