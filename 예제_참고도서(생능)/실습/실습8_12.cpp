#include <stdio.h>
void main()
{
 int i, a, b, sum=0;
 printf("a부터 b까지의 합 계산\n");
 printf("정수 a 입력 후 Enter>");
 scanf("%d", &a);
 printf("정수 b(a<b)입력 후 Enter>");
 scanf("%d", &b);

 for(i=a;i<=b;i+=1)
    sum+=i;
 printf("%d부터 %d까지의 합=%d\n", a, b, sum);
}



