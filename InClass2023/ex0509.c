#include <stdio.h>
void main()
{
	// 중첩 반복문 (4각형으로 출력)
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n한줄을 띄웁니다\n");
	// 3각형으로 출력 (연습문제 참조)
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	printf("\n한줄을 띄웁니다\n");
	// 99단 (중첩 반복문)
	for (int i = 1; i <= 9; i++)
	{
		// 1단을 아래 방향으로 출력
		//printf("%d*%d=%d\n", 1, i, 1 * i);
		
		// 1~9까지의 곱셈을 한줄로 (반복하면서) 출력하고
		for (int j = 1; j <= 9; j++) {
			printf("%d*%d=%2d ", j, i, j * i);
		}
		printf("\n");  // 다음줄로 (한줄을 띄움)
	}

	//  ---------------- while반복문
	// while (조건) {}  -- 조건이 참일때 반복
	
	printf("\n한줄을 띄웁니다\n");
	// 변수 초기값으로 0이 아닌 수를 대입하여 반복문으로 진입하게 함
	int user = 10;  
	while (user != 0)  // 사용자가 0을 입력할 때까지 반복
	{
		printf("1:가위, 2:바위, 3:보 (0:종료) -- 정수를 입력하세요 ");
		scanf_s("%d", &user);
		printf("%d\n", user);
	}

	printf("\n한줄을 띄웁니다\n");
	// 만약 user=0을 초기 값으로 대입하면, while(조건식) 에서 조건이 거짓이 되어 반복문으로 진입하지 않게 됨
	int user1 = 0;
	while (user1 != 0)  // 사용자가 0을 입력할 때까지 반복하는데, 처음값이 0이라서 여기 반복문은 실행되지 않음
	{
		printf("1:가위, 2:바위, 3:보 (0:종료) --> 정수 입력 ");
		scanf_s("%d", &user1);
		printf("%d\n", user1);
	}

	printf("\n한줄을 띄웁니다\n");
	// do while() -- 먼저 한번을 실행하고 나서 조건을 체크
	// 한번 실행한 다음, 조건을 검사하기 때문에
	// 초기값이 0이라도 한번은 실행하게 됨
	int user2 = 0;
	do
	{
		printf("1:가위, 2:바위, 3:보 (0:종료) -- do while()에서 정수를 입력 ");
		scanf_s("%d", &user2);
		printf("%d\n", user2);
	} while (user2 != 0);

	printf("\n한줄을 띄웁니다\n");
	// while() 문으로 반복문을 실행하면서 반복회수를 카운트하려면 이렇게
	int cnt = 0;  // 카운트를 위한 변수 선언
	int user3 = 10;
	while (user3 != 0)  // 사용자가 0을 입력할 때까지 반복
	//while (cnt < 10)  // 10판만 반복  
	{
		printf("1:가위, 2:바위, 3:보 (0:종료) -- whlie() 에서 정수(0~3)를 입력합니다 ");
		scanf_s("%d", &user3);
		cnt++;   // 키보드 입력을 한번 할 때마다, cnt 값을 1씩 플러스 시켜줌
		printf("%d\n", user3);
	}
	printf("%d판했습니다\n", (cnt - 1));

	printf("\n한줄을 띄웁니다\n");
	// while() 반복문을 for() 반복문으로 바꾸려면
	//int cnt = 0;  // 여기가 초기식에 해당
	int user4 = 10;
	//while (cnt < 10) // 여기가 조건식에 해당
	for (int cnt = 0; cnt < 10; cnt++)
	{
		printf("1:가위, 2:바위, 3:보 (10번 반복) -- for()에서 정수 입력 ");
		scanf_s("%d", &user4);
		//cnt++;  // 여기가 증감식에 해당
		printf("%d 판에서 %d을 입력받음\n", (cnt+1), user4);
	}

	// 정수를 입력받아, 구구단 출력하는 for() 반복문을 
	// while() 반복문으로 바꿔서 짜보세요.
	int x = 1, y = 1;
	while (x < 10)
	{
		while (y < 10)
		{
			printf("%d*%d=%2d ", y, x, x*y);
			y++;
		}
		printf("\n");
		y = 1;
		x++;
	}
}