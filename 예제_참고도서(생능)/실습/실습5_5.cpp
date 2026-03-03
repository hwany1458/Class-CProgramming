#include <stdio.h>
void main()
{
  double a, b, c;
  double e1, e2, e3;
  printf("세개의 실수를 입력하고 Enter>");
  scanf("%lf %lf %lf", &a, &b, &c);
  e1=3*a+4*b-6*c;  
  e2=2*a*a+4*b*c;
  e3=(a+b)/c;
  printf("식1=%f\n", e1);
  printf("식2=%f\n", e2);
  printf("식3=%f\n", e3);
}
