//#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main0331()
{
	//----- 03-31
	int a = 10;
	int b = 20;
	double f = 123.456;

	printf("score=%d, level=%d\n", a, b);
	// 갯수가 다를때 어떻게 나오는지 확인해 보세요~~
	// 1. 형식지정자 > 출력대상 데이터
	// 2. 형식지정자 < 출력대상 데이터
	// 형식지정자 = 출력대상 데이터 (정상)

	// 어떤 결과가 나오는지 확인해 보세요~~
	// 에러는 발생하지 않지만, 
	// 형식지정자와 출력대상 데이터의 갯수가 다르면, 예상치 못한 결과가 나올 수 있습니다.
	printf("형식지정자가 많을 때, score=%d, level=%d\n", a);
	printf("형식지정자가 적을 때, score=%d, level=%d\n", a, b, 30);

	// 실수에서 소수점 아래 2자리까지만 출력
	// 소수점 2자리에서 반올림? 버림? 확인해 보세요~~
	printf("speed=%.2f\n", f);

	int c;
	// scanf()
	printf("점수를 입력하세요: ");
	// unsafe 문제로 에러발생
	// (1) _CRT_SECURE_NO_WARNINGS
	// (2) scanf_s()
	//scanf("%d", &c);
	scanf_s("%d", &c);

	printf("입력받은 값은 %d\n", c);
}