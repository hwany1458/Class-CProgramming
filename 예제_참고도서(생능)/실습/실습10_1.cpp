#include <stdio.h>
#include <math.h>
void main()
{
	int i = 1;
	while (i != 0)
	{
		printf("0을 입력하면 반복이 중단됨\n");
		printf("숫자 입력 후 Enter>");
		scanf("%d", &i);
		printf("%d의 절댓값=%d\n", i, abs(i));
	}
}


