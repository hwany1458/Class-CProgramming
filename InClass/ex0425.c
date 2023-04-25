#include <stdio.h>
void main()
{
	// 임의의 3개 정수를 키보드로부터 입력 받아
	// (그중) 제일 작은수를 출력하세요.


	// 정종헌
	int a1, b1, c1;
	scanf_s("%d %d %d", &a1, &b1, &c1);

	if (a1 <= b1 && a1 < c1)
		printf("%d\n", a1);
	else if (b1 <=  a1 && b1 < c1)
		printf("%d\n", b1);
	else
		printf("%d\n", c1);

	// 이종현
	int a2, b2, c2, min2;
	printf("\n세개의 정수를 입력하세요:");
	scanf_s("%d %d %d", &a2, &b2, &c2);

	min2 = a2;
	if (b2 < min2) {
		min2 = b2;
	}
	if (c2 < min2) {
		min2 = c2;
	}
	printf("가장 작은 수는 %d입니다.\n", min2);

	//신지웅
	int a3, b3, c3;

	printf("\n세 정수를 입력하세요.");
	scanf_s("%d %d %d", &a3, &b3, &c3);

	int min3 = a3;
	if (min3 > b3) min3 = b3;
	if (min3 > c3) min3 = c3;

	printf("제일 작은 수는 %d입니다.\n", min3);

	// 1개의 정수를 입력받아, 홀수인지 짝수인지를 판단하여 출력
	// if else 문을 사용
	printf("\n1개 정수를 입력하고 엔터를 치세요 ");
	int x;
	scanf_s("%d", &x);

	// if 조건에 따라, 
	if ((x % 2) == 0) // 나머지가 0인 경우
	{
		printf("짝수\n");
	}
	else // 나머지가 0이 아닌 경우 (=) 나머지가 1인 경우
	{
		printf("홀수\n");
	}

	// switch case 문
	// switch (수식)에서 수식 결과와 case 값이 같은 경우를 찾아 실행
	switch (x % 2) 
	{
	case 0:
		printf("짝수입니다\n");
		break;		// break문은 (뒤의)실행을 멈추고 빠져나온다
		                // break문이 없을 경우, 아래 명령을 계속 실행하기 때문에
						// (아래의) printf() 명령 실행 결과도 함께 나옴
	//case 1:
	default:
		printf("홀수입니다\n");
		break;
	}
	
	//--- switch문 예시 (실습문제 몇번)
	printf("\n1개 정수(1월~12월)를 입력하고 엔터를 치세요 ");
	int y;
	scanf_s("%d", &y);
	switch (y)
	{
	case 1: printf("31일\n"); break;
	case 2: printf("28일\n"); break;
	case 3: printf("31일\n"); break;
	case 4: printf("30일\n"); break;
	case 5: printf("31일\n"); break;
	case 6: printf("30일\n"); break;
	case 7: printf("31일\n"); break;
	case 8: printf("31일\n"); break;
	case 9: printf("30일\n"); break;
	case 10:printf("31일\n"); break;
	case 11:printf("30일\n"); break;
	case 12:printf("31일\n"); break;
	default:printf("잘못입력했습니다\n"); break;
	}

	// break문을 적절하게 활용하여 아래와 같이 작성할 수 있다
	switch (y)
	{
	case 1: 
	case 3: 
	case 5: 
	case 7: 
	case 8: 
	case 10:
	case 12:printf("31일\n"); break;
	case 2: printf("28일\n"); break;
	case 4: 
	case 6: 
	case 9: 
	case 11:printf("30일\n"); break;
	default:printf("잘못입력했습니다\n"); break;
	}

}