#include <stdio.h>
void main()
{
	char degree;
	printf("평점등급을 입력하고 Enter>");
	scanf("%c", &degree);
	if (degree <= 'D')
		printf("시험합격\n");
	else
		printf("시험불합격\n");
}

