#include <stdio.h>
int main(void)
{
 int ma[3][3]={{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
 int mb[3][3]={{1, 4, 9}, {6, 5, 8}, {2, 3, 7}};
 int sum[3][3]={0};
 int i, j;
 for(i=0; i<=2; i++)
 {
   for(j=0; j<=2; j++)
   {
     sum[i][j]=ma[i][j]+mb[i][j];
     printf("sum[%d][%d]=%2d ", i, j, sum[i][j]);
   }
   printf("\n");
 }
  return 0;
}
