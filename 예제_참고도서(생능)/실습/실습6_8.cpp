#include <stdio.h>
void main()
{
  int a, b;	
  printf("두 개의 정수를 입력하고 Enter>");
  scanf("%d %d", &a, &b);
 (a>b) ? printf("큰 수는 %d\n", a) : printf("큰 수는 %d\n", b);
}

