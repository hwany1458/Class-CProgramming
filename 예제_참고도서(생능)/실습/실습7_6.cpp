#include <stdio.h>
void main()
{
   int a, b;
   printf("두 개의 정수를 입력하고 Enter>");
   scanf("%d %d", &a, &b);
   if (a-b>0)
     printf("변수 a가 큽니다.\n");
   else if (a-b<0)
     printf("변수 b가 큽니다.\n");
   else
     printf("같은 값을 입력했습니다.\n");
}

