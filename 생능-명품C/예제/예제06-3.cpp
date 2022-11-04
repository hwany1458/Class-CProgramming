#include <stdio.h>
void main()
{
 int k;
 printf("세 자리 10진 정수 입력 후 Enter>");
 scanf("%d", &k);
 printf("  1의 자리수 %d \n", k%10);
 k=k/10;
 printf(" 10의 자리수 %d \n", k%10);
 k=k/10;
 printf("100의 자리수 %d \n", k%10);
}
