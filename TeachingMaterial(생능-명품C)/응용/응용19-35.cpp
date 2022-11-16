#include<stdio.h>
int main(void)
{
 int r[]={4, 1, 5, 3, 2};
 int i, j, n=5, temp;
 printf("original data\n");
 for(i=0;i<n;i++)
     printf(" %d ", r[i]);
 printf("\n");
 printf("data after bubble sort\n");
 for(i=0;i<n-1;i++)
   for(j=0;j<n-i-1;j++)
   {
      if (r[j+1]<r[j])
      {
	 temp=r[j];
	 r[j]=r[j+1];
	 r[j+1]=temp;
      }
   }
 for(i=0;i<n;i++)
   printf(" %d ",r[i]);
 printf("\n");
 return 0;
}
