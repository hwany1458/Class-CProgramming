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
		printf("\n1:가위, 2:바위, 3:보 (0:종료) --> 정수 입력 ");
		scanf_s("%d", &user1);

		// 컴퓨터는 임의의 정수 뽑기(1~3)
		com = (rand() % 3) + 1;

		printf("사용자 %d, 컴퓨터 %d  ", user1, com);

		// 가위바위보에서 승무패를 판별
		if (user1 == 1)  // 사용자가 가위
		{  // --------------------------------
			if (com == 1) // 컴퓨터가 가위
			{
				printf("비겼습니다");
			}
			else if (com == 2) // 컴퓨터가 바위
			{
				printf("졌습니다");
			}
			else // 컴퓨터가 보
			{
				printf("이겼습니다");
			}
		}
		else if (user1 == 2)  // 사용자가 바위
		{
			if (com == 1) // 컴퓨터가 가위
			{
				printf("이겼습니다");
			}
			else if (com == 2) // 컴퓨터가 바위
			{
				printf("비겼습니다");
			}
			else // 컴퓨터가 보
			{
				printf("졌습니다");
			}

		}
		else if (user1 == 3)  // 사용자가 보
		{
			if (com == 1) // 컴퓨터가 가위
			{
				printf("졌습니다");
			}
			else if (com == 2) // 컴퓨터가 바위
			{
				printf("이겼습니다");
			}
			else // 컴퓨터가 보
			{
				printf("비겼습니다");
			}

		}
		else
		{
			printf("잘못입력했습니다");
		}
	}

}