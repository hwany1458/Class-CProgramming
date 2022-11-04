#include <stdio.h>
void main()
{
	int score = 97;
	printf("%d 점수는 ", score);
	if (score >= 90)
		printf("A 입니다.");
	if (score >= 80)
		printf("B 입니다.");
	if (score >= 70)
		printf("C 입니다.");
}