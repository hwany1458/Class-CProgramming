#include <stdio.h>
void main()
{
	int i, n, sum = 0;
	printf("1부터 n까지의 합 계산\n");
	printf("정수 n 입력 :");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 1)
		sum += i;
	printf("1부터 %d까지의 합:%d\n", n, sum);
}
