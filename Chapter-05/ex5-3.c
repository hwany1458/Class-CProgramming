#include <stdio.h>
void main()
{
	int score;
	printf("점수를 입력하시오= ");
	scanf_s("%d", &score);
	if (score > 90)
		printf(" degree='A' \n");
	else if (score > 80)
		printf(" degree='B' \n");
	else if (score > 70)
		printf(" degree='C' \n");
	else if (score > 60)
		printf(" degree='D' \n");
	else
		printf(" degree='F' \n");
}