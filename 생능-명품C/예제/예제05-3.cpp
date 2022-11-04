#include <stdio.h>
void main()
{
 int a, b;
 printf("8진 정수를 입력하고 Enter>");
 scanf("%o", &a);
 printf("8진 정수를 입력하고 Enter>");
 scanf("%o", &b);
 printf("변수 a값(8진수): %o\n", a);
 printf("변수 a값(10진수): %d\n", a);
 printf("변수 b값(8진수): %o\n", b);
 printf("변수 b값(10진수): %d\n", b);
 printf("a+b(8진수)=%o\n", a+b);
 printf("a+b(10진수)=%d\n", a+b);
}
