#include <stdio.h>

void main()
{
	int a, b, max;
	a = 10;
	b = 5;

	// 양자택일인 경우 (둘중 하나를 선택), if else 문을 사용할 수 있다.
	if (a >= b)
	{
		max = a;
	}
	else
	{
		max = b;
	}
	printf("큰값은 %d\n", max);

	a = 20;
	b = 30;
	//max = (a > b) ? a : b;
	printf("큰값은 %d\n", max);

	int inputNumber;
	printf("임의의 정수를 입력하세요 ");
	scanf_s("%d", &inputNumber);

	// 셋 중 하나를 선택하는 경우, if else if else 문을 사용할 수 있다.
	// 나머지 연산자 % : 나머지를 구하는 연산자 : 3개 인 경우의 수 : 0, 1, 2
	// (예시) 가위바위보 게임에서 3으로 나눈 나머지로 승패를 결정할 수 있다.
	if ((inputNumber % 3) == 0) // 0
	{
		printf("나머지가 0 입니다\n");
	}
	else if ((inputNumber % 3) == 1)
	{
		printf("나머지가 1 입니다\n");
	}
	else
	{
		printf("나머지가 2 입니다\n");
	}


}