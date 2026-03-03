#include<stdio.h>
int main(void)
{
 int r[]={4, 1, 5, 3, 2};
 int n=5, k, i, temp, flag;
 printf("original data\n");
 for(i=0;i<n;i++)
     printf(" %d ", r[i]);
 printf("\n");
 printf("data after bubble sort2\n");
 flag=n;
 while(flag>0)
{
   k=flag-1;
   flag=0;
   for(i=0;i<k;i++)
     if (r[i]>r[i+1])
     {
  	  temp=r[i];
	  r[i]=r[i+1];
	  r[i+1]=temp;
	  flag=i+1;
     }
 }
 for(i=0;i<n;i++)
   printf(" %d ", r[i]);
 printf("\n");
 return 0;
}
