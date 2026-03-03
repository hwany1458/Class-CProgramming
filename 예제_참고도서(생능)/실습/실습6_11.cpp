#include <stdio.h>
void main()
{
 int n;
 printf("정수를 입력하고 Enter>");
 scanf("%d", &n);
 printf("%d\n", 2<<(n-1));
}

