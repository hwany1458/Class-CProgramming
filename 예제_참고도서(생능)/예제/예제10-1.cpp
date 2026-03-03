#include <stdio.h>
#include <math.h>
void main()
{
	int i;
	printf("숫자 입력 후 Enter>");
	scanf("%d", &i);
	printf("%d의 절댓값=%d\n", i, abs(i));
}
