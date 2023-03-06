#include <stdio.h>
double division(double a, double b);
void main()
{
	double a, b;
	printf("실수 a를 입력하고 Enter>");
	scanf("%lf", &a);
	printf("실수 b를 입력하고 Enter>");
	scanf("%lf", &b);
	printf("a/b=%f\n", division(a, b));
}

double division(double a, double b)
{
	return a / b;
}


