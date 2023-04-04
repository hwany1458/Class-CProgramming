#include <stdio.h>
void main()
{
	int a = 10, b = 3;
	printf("%d, %d, %d, %d, %d\n", a+b, a-b, a*b, a/b, a%b);

	printf("%d\n", ++a);
	printf("%d\n", a++);

	a += b;   // a+b를 한 다음, a에 대입 (overwrite)

	printf("%d\n", a);

	double r;
	const double pi = 3.14159;

	float c = 10.0, d = 3.0;
	printf("%.1f, %.1f, %.1f, %.1f\n", c+d, c-d, c*d, c/d);
}