#include <stdio.h>
#include <math.h>
void main()
{
	double x, y;
	printf("실수 x를 입력하고 Enter>");
	scanf("%lf", &x);
	printf("실수 y를 입력하고 Enter>");
	scanf("%lf", &y);
	printf("%f의 %f승=%f\n", x, y, pow(x, y));
	printf("%f의 %f승=%f\n", y, x, pow(y, x));
}


