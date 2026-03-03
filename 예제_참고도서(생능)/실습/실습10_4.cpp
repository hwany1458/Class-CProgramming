#include <stdio.h>
#include <math.h>
void main()
{
	double x, y;
	printf("실수 x를 입력하고 Enter>");
	scanf("%lf", &x);
	printf("실수 y를 입력하고 Enter>");
	scanf("%lf", &y);
	printf("식1 : %f\n", pow(x, 2.) + pow(y, 2.));
	printf("식2 : %f\n", pow((x + y), 2.));
	printf("식3 : %f\n", pow(fabs(x)+fabs(y), 2.));
	printf("식4 : %f\n", sqrt(pow(x, 2.) + pow(y, 2.)));
}

