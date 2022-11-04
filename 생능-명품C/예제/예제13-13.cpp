#include <stdio.h>
int sum_mat(int a[][3], int n);
int main(void)
{
 int ma[3][3]={{3, 8, 6},
	         {4, 1, 7},
		 {5, 2, 9}};
 int sum;
 sum=sum_mat(ma , 3);
 printf("행렬요소의 합: %d\n", sum);
 return 0;
}

int sum_mat(int a[][3], int n)
{
 int i, j, total=0;
 for(i=0;i<n; i++)
   for(j=0;j<n; j++)
     total+=a[i][j];
 return total;
}
