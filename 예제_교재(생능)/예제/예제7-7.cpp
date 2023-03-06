#include <stdio.h>
void main()
{
	int grade1, grade2;
	printf("두개의 성적점수를 입력하고 Enter>");
	scanf("%d %d", &grade1, &grade2);
	if (grade1 >= 60 && grade2 >= 60)
		printf("시험 합격!\n");
	else
		printf("시험 불합격!\n");
}
