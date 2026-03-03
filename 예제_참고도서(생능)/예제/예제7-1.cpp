#include <stdio.h>
void main()
{
	int grade;
	printf("성적 점수를 입력하고 Enter>");
	scanf("%d", &grade);
	if (grade > 60)
		printf("시험 합격!\n");
}
