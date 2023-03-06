#include <stdio.h>
void sum_mat(int a[][3], int b[][3], int n);
int main(void)
{
 int ma[3][3]={{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
 int mb[3][3]={{1, 4, 9}, {6, 5, 8}, {2, 3, 7}};
 sum_mat(ma, mb, 3);
 return 0;
}

void sum_mat(int a[][3], int b[][3], int n)
{
 int i, j, sum[3][3]={0};
 for(i=0;i<n; i++)
 {
   for(j=0;j<n; j++)
   {
     sum[i][j]=a[i][j]+b[i][j];
     printf("sum[%d][%d]=%2d ", i, j, sum[i][j]);
   }
  printf("\n");
 }
}

