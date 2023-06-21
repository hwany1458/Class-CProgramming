#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	// 가위바위보 게임

	int user1 = 10;
	int com = 0;
	srand(time(NULL));

	// 사용자가 0을 입력할 때까지 반복
	while (user1 != 0)  
	{
		// 사용자는 키보드 입력
		printf("1:가위, 2:바위, 3:보 (0:종료) --> 정수 입력 ");
		scanf_s("%d", &user1);

		// 컴퓨터는 임의의 정수 뽑기(1~3)
		com = (rand() % 3) + 1;

		printf("사용자 %d, 컴퓨터 %d\n", user1, com);
	}

}