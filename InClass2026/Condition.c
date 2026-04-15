#include <stdio.h>

void mainChapter4()
{
	int level = 0;

	// 게임이 진행되고 레벨이 10이 되었다고 가정
	level = 10;

	// 조건문
	if (level == 5)
	{
		// 조건이 참일때 실행
		printf("레벨이 5입니다\n");
	}
	else
	{
		// 조건이 거짓일때 실행
		
		// 집합괄호가 없는 경우에는 가장 가까운 한 줄만이 조건문에 속하게 된다.
		printf("레벨이 5가 아닙니다\n");
		printf("레벨은 %d입니다\n", level);
	}

	int inputNumber = 0;
	printf("정수를 입력하세요.");
	scanf_s("%d", &inputNumber);

	// 짝수인지? 홀수인지? 를 판별
	if ((inputNumber % 2) == 0)
	{
		// 참
		printf("입력한 값은 %d. 짝수입니다\n", inputNumber);
	}
	else
	{
		// 거짓
		printf("입력한 값은 %d. 홀수입니다\n", inputNumber);
	}
}