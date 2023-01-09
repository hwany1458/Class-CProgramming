#include <stdio.h>
int add(int n);
int main(void)
{
  int n;	
  printf("정수 입력 후 Enter>");
  scanf("%d",&n);
  printf("1부터 %d까지 합 : %d\n", n, add(n));
  return 0;
}

int add(int n)
{
  if (n==1)
     return 1;
  return n+add(n-1);
}
