#include <stdio.h>
void main()
{
 double x, y;
 printf("실수를 입력하고 Enter>");
 scanf("%lf", &x);
 printf("실수를 입력하고 Enter>");
 scanf("%lf", &y);
 printf("x*y=%f\n", x*y);
 printf("x/y=%f\n", x/y);
 printf("x*y=%lf\n", x*y);
 printf("x/y=%lf\n", x/y);
}
