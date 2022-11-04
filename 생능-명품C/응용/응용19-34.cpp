#include<stdio.h>
int main(void)
{
  int r[]={4, 1, 5, 3, 2};
  int n=5, i, j, temp;
  printf("original data\n");
  for(i=0;i<n;i++)
     printf(" %d ", r[i]);
  printf("\n");
  printf("data after insertion sort\n");
  for (j=1;j<n;j++)
  {
    temp = r[j];
    i = j;
    while ((i>0) && (r[i-1]>temp))
      {
	r[i] = r[i-1];
	i = i - 1;
      }
    r[i] = temp;
  }
  for(j=0; j<n ; j++)
      printf(" %d ", r[j]);
 printf("\n");
 return 0;
}
