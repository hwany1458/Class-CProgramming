#include <stdio.h>
int main(void)
{
	int korea[4] = { 15, 17, 27, 32 };
	int china[4] = { 27, 16, 19, 11 };
	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < 4; i += 1)
	{
		sum1 += korea[i];
		sum2 += china[i];
		printf("%d %d\n", korea[i], china[i]);
	}
	printf("korea 합계:%d, china 합계:%d\n", sum1, sum2);
	return 0;
}

