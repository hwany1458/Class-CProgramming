#include <stdio.h>
void main()
{
   int a, b;
   printf("두 개의 정수를 입력하고 Enter>");
   scanf("%d %d", &a, &b);
   if (a>b)
     printf("a%%b =%d\n", a%b);
   else if (a<b)
     printf("b%%a =%d\n", b%a);
   else
     printf("같은 값을 입력했습니다.\n");
}

