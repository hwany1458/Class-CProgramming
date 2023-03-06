#include <stdio.h>
void main()
{
	int n, i, j;
	int sum;
	printf("1부터 n까지의 덧셈계산\n");
	printf("정수 n 입력 :");
	scanf("%d", &n);
	for (j = 1; j <= n; j += 1)
	{
		sum = 0;
		for (i = 1; i <= j; i += 1)
			sum += i;
		printf("1부터 %2d까지 합=%4d\n", j, sum);
	}
}
