#include <stdio.h>
int main(void)
{
 int mat[3][3] ={{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
 int i, j;
 for(i=0;i<=2;i++)
 {
  for(j=0;j<=2;j++)
    printf("mat[%d][%d]= %d ", i, j, mat[i][j] );
  printf("\n");
 }
 return 0;
}
