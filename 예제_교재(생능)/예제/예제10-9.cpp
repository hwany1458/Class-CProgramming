#include <stdio.h>
int fact(int n);
int main(void)
{
  int n;	
  printf("정수 입력후 Enter>");
  scanf("%d",&n);
  printf("1부터 %d까지 곱 : %d\n", n, fact(n));
  return 0;
}

int fact(int n)
{
  if (n==1)
    return 1;
  return n*fact(n-1);
}
