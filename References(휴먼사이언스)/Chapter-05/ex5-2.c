#include <stdio.h>
void main()
{
	int a;
	printf("a 값을 입력하시오= ");
	scanf_s("%d", &a);
	if (a >= 0)
		printf("a는 양수입니다.\n ");
	else
		printf("a는 음수입니다.\n ");
}