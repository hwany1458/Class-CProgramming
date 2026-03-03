#include<stdio.h>
int main(void)
{
 int r[]={4, 1, 5, 3, 2};
 int n=5, i, j, min, temp;
 printf("original data\n");
 for(i=0;i<n;i++)
     printf(" %d ", r[i]);
 printf("\n");
 printf("data after selection sort\n");
 for (i=0; i < n-1; i++)
  {
    min = i;
   for (j=i+1; j < n; j++)
 	if (r[j] < r[min])
		min = j;
   temp = r[min];
   r[min] = r[i];
   r[i] = temp;
  }
 for(i=0;i<n;i++)
	printf(" %d ", r[i]);
 printf("\n");
 return 0;
}
