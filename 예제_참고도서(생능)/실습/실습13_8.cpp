#include <stdio.h>
int main(void)
{
	int i, korea[4], china[4];
	int sum1 = 0, sum2 = 0;
	for (i = 0; i < 4; i += 1)
	{
		printf("대한민국의 %d쿼터 득점수 입력 후 Enter>", i+1);
		scanf("%d", &korea[i]);
		printf("중국의 %d쿼터 득점수 입력 후 Enter>", i+1);
		scanf("%d", &china[i]);
		sum1 += korea[i];
		sum2 += china[i];
		printf("입력된 데이터 :%d  %d\n", korea[i], china[i]);
	}
	printf("합계 :%d  %d\n", sum1, sum2);
	return 0;
}

