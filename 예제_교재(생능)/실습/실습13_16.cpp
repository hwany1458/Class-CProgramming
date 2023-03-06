#include <stdio.h>
int main(void)
{
 int ma[3][3]={{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
 int sum=0;
 int i, j;
 for(i=0; i<=2; i++)
   for(j=0; j<=2; j++)
     sum+=ma[i][j];
  printf("행렬요소의 합=%d\n", sum);
  return 0;
}

