#include <stdio.h>
void main()
{
 int a, b;
 printf("정수를 입력하고 Enter>");
 scanf("%d", &a);
 printf("정수를 입력하고 Enter>");
 scanf("%d", &b);
 printf("변수 a값(8진수): %o\n", a);
 printf("변수 a값(16진수): %x\n", a);
 printf("변수 b값(8진수): %o\n", b);
 printf("변수 b값(16진수): %x\n", b);
 printf("a+b(8진수)=%o\n", a+b);
 printf("a+b(16진수)=%x\n", a+b);
}
