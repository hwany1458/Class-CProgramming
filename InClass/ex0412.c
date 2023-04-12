#include <stdio.h>
void main()
{
	//int a = 10;
	int a;
	printf("정수를 입력하세요 ");
	scanf_s("%d", &a);

	// if()문을 써서 조건을 체크
	if ((a % 2) == 0)  // 조건이 참일 때만 실행
	{
		printf("변수a 값은 짝수입니다\n");
	}
	else  // 조건이 거짓일때 실행
	{
		printf("입력받은 a는 홀수입니다\n");
	}

	// 조건연산자를 써서 동일하게 바꾸세요
	((a % 2) == 0) ? printf("짝수\n") : printf("홀수\n");


	// 키보드로부터 정수를 입력받아, 
	// 양수인지 음수인지를 판별하고 출력하세요
	if (a>0)
	{
		printf("양수입니다\n");
	}
	else if (a<0)
	{
		printf("음수입니다\n");
	}
	else
	{
		printf("0입니다\n");
	}

	// 키보드로부터 정수(0~100)를 받아서, 학점을 출력하세요
	int score;
	printf("받고싶은 점수를 입력하세요 ");
	scanf_s("%d, &score");

	// ChatGPT가 이렇게 짠대
	if (score >= 90) { printf("A\n"); }
	else if (score >= 80) { printf("B\n"); }
	else if (score >= 70) { printf("C\n"); }
	else if (score >= 60) { printf("D\n"); }
	else { printf("F\n"); }

	// 용환이스타일
	// 100초과, 또는 0미만 을 입력받으면 오류메시지
	if ((100 <= score) && (score >= 90)) { printf("A\n"); }
	else if ((score < 90) && (score >= 80)) { printf("B\n"); }
	else if ((score < 80) && (score >= 70)) { printf("C\n"); }
	else if ((score < 70) && (score >= 60)) { printf("D\n"); }
	else { printf("F\n"); }

}