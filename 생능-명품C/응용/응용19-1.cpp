#include<stdio.h>
int main(void)
{
  int n;
  printf("정수를 입력하고 Enter>");
  scanf("%d", &n);
  while(n>0)
  {
     printf("%d", n%2); 
     n=n/2; 
  }      
  printf("\n");      
  return 0;
}
