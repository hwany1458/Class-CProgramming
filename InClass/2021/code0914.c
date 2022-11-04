#include <stdio.h>

// 함수선언
// 반환데이터타입 함수명(매개변수의데이터타입 매개변수, ...);
// 예 : 덧셈함수 
int add(int a, int b);

void main()
{
	int *a;

	printf("안녕\n");

	// 필요할 때 함수호출 
	// 호출방법 : 
	// 함수명(매개변수값, 매개변수값) 
	// 변수 = 함수명()  -- 함수호출해서 실행결과를 받음 
	//                 -- 받은 것을 변수에 대입

	printf("결과값은 %d 입니다\n", add(10, 20));

	int aaa;
	aaa = add(100, 200);
	printf("결과는 %d\n", aaa);
}

// 함수정의
// 반환데이터타입 함수명(매개변수의데이터타입 매개변수, ...) 
// { 함수에서 동작하는 명령... }

int add(int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}


