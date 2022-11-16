#include <stdio.h>
void main()
{
 int i, n;
 printf("1부터 n까지의 정수출력\n");
 printf("정수 n 입력 후 Enter>");
 scanf("%d", &n);
 for(i=1;i<=n;i+=1)
   printf("i=%d\n", i);
}
