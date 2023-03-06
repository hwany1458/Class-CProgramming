#include <stdio.h>
int main(void)
{
 int ma[3][3], mb[3][3], sum[3][3]={0};
 int i, j;
 for(i=0; i<=2; i++)
 {
   for(j=0; j<=2; j++)
   {
     printf("%d%d의 두 행렬요소 값 입력 후 Enter>", i, j);
     scanf("%d %d", &ma[i][j], &mb[i][j]);
   }
 }
 for(i=0; i<=2; i++)
 {
   for(j=0; j<=2; j++)
     printf("ma[%d][%d]= %d ", i, j, ma[i][j] );
   printf("\n");
}
 for(i=0; i<=2; i++)
 {
   for(j=0; j<=2; j++)
     printf("mb[%d][%d]= %d ", i, j, mb[i][j] );
   printf("\n");
}
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


