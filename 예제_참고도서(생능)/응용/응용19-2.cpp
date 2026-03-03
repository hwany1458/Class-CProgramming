#include<stdio.h>
void dectobin(int n);
int main(void)
{
  int n;
  printf("정수를 입력하고 Enter>");
  scanf("%d", &n);
  dectobin(n);
  printf("\n");
  return 0;
}

void dectobin(int n)
{
  while(n>0)
  {
     printf("%d", n%2); 
     n=n/2; 
  }            
}
