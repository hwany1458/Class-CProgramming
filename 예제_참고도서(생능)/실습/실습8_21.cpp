#include <stdio.h>
void main()
{
	double n, i, j;
	double sum;
	printf("1부터 n까지의 n!계산\n");
	printf("정수 n 입력 :");
	scanf("%lf", &n);
	for (j = 1.; j <= n; j += 1.)
	{
		sum = 1.;
		for (i = 1.; i <= j; i += 1.)
			sum *= i;
		printf("%2.f!=%14.f\n", j, sum);
	}
}

