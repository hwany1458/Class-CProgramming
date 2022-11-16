#include<stdio.h>
#include<stdlib.h>
#define EQ ==
#define PI 3.141592
#define START "프로그램을 시작합니다."
#define END "프로그램을 종료합니다."
int main(void)
{
 double radius;
 printf("%s\n", START);
 printf("0이 아닌 반지름의 길이를 입력하고 Enter :");
 scanf("%lf", &radius);
 if (radius EQ 0)
 {
   printf("%s\n", END);
   exit(0);
 }
 printf("원의 둘레는 %lf 입니다.\n", 2*PI*radius);
 printf("%s\n", END);
 return 0;
}
