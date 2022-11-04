#include <stdio.h>
void main()
{
 int a, b;
 printf("16진 정수를 입력하고 Enter>");
 scanf("%x", &a);
 printf("16진 정수를 입력하고 Enter>");
 scanf("%x", &b);
 printf("변수 a값(8진수): %o\n", a);
 printf("변수 a값(10진수): %d\n", a);
 printf("변수 a값(16진수): %x\n", a);
 printf("변수 b값(8진수): %o\n", b);
 printf("변수 b값(10진수): %d\n", b);
 printf("변수 b값(16진수): %x\n", b);
 printf("a+b(16진수)=%x\n", a+b);
 printf("a+b(10진수)=%d\n", a+b);
}
