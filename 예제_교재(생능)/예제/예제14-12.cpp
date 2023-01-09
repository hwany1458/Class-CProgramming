#include <stdio.h>
#include <stdlib.h>
int *mat_mult(int m[], int n);
int main(void)
{
 int ma[4]={1, 3, 5, 7};
 int *mb, i;
 for(i=0;i<4;i++)
   printf("ma[%d]=%2d ", i, ma[i]);
 printf("\n");
 mb=mat_mult(ma, 4);
 for(i=0;i<4;i++)
   printf("mb[%d]=%2d ", i, mb[i]);
 return 0;
}
int *mat_mult(int m[], int n)
{
 int *mc=(int*)malloc(n);
 for(int i=0;i<n;i++)
	mc[i]=m[i]*n;
 return mc;
}
