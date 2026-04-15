#include <stdio.h>

void main0324()
{
	//---------- 03-24
	// 실수형 변수 선언
	float f1;
	f1 = 3.4f;
	printf("실수:%f\n", f1);

	// 100+200 먼저 수행한 다음, 오른쪽 값을 왼쪽으로 대입
	// 대입연산자(=)는 가장 마지막에 수행됨
	int hp = 100 + 200;  
	printf("hp=%d\n", hp);

	// 정수 나누기 정수는 (결과도) 정수로 나옴
	hp = 10 / 3;
	printf("hp=%d\n", hp);

	double height = 10.0 / 3.0;
	printf("키 = %lf\n", height);

	char c1 = 'A';
	printf("c1=%c\n", c1);

	// 한글은 어떨까요?
	// char는 1바이트, 한글은 2바이트, 깨짐
	char c2 = '가';
	printf("c2=%c\n", c2);

	// 한글은 2바이트, 문자열 처리됨
	// 배열은 뒤에서 배울 예정
	char c3[5] = "나";
	printf("c3=%s\n", c3);

	int iii;
	// 정수형 변수와 문자형 변수는 연산이 가능함
	// 어떤 결과가 나오는지 확인해 봅니다
	iii = 1 + 'A';
	printf("iii=%d\n", iii);
	iii = 1 + '1';
	printf("iii=%d\n", iii);

	/*
	single quote(')는 문자 하나를 표현할 때 사용
	double quote(")는 문자열을 표현할 때 사용
	1. '1', "1"은 서로 다른 타입입니다.
	1은 정수형 상수, '1'은 문자형 상수, "1"은 문자열 상수입니다.
	*/

	// 상수형 변수
	const double pi = 3.14159;
	printf("pi=%f\n", pi);

	// 상수형 변수는 값을 변경할 수 없습니다.
	// 변경하면 어떤 결과가 나오는지 확인해 봅니다.
	//pi = 0.1234;

	int aaaaa;
	//aaaaa = 1000;
	//printf("aaaaa=%d\n", aaaaa);

}
