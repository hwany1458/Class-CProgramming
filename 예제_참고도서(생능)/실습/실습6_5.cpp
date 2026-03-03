#include <stdio.h>
void main()
{
   double r, pi=3.141592;
   printf("반지름을 입력하고 Enter>");
   scanf("%lf", &r);
   printf("원의 둘레=%f\n", 2*r*pi);
   printf("원의 면적=%f\n", pi*r*r);
}

