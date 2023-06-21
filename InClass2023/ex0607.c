#include <stdio.h>

// 함수선언
int func1(int a);
int func2();

int a = 100;  // 전역변수

int main()
{
	//int a = 100;  // 지역변수
	printf("%d\n", a);
	
	//printf("%d\n", func1(a));	// 지역변수일때, 함수호출
	printf("%d\n", func2());	// 전역변수일때, 함수호출

	printf("%d\n", a);


	// 배열 (동일한 데이터타입을 묶어서 쓸때)
	int x = 10;	// x라는 이름으로 정수형 변수를 선언 
				// 초기값으로 10을 할당

	int y[3] = {10, 20, 30};
				// y라는 이름으로 정수형 배열 변수를 선언 
				// 배열 크기가 3
				// 초기값 할당은??  {}
	
	printf("x=%d\n", x);
	printf("배열y의 2번째 데이터=%d\n", y[1]);

	printf("배열 전부를 출력하려면\n");  // 반복문
	for (int i = 0; i < 3; i++)
	{
		printf("%d  ", y[i]);
	}

	return 0;
}


// 함수정의
int func1(int a)  // 매개변수 (지역변수)
{
	printf("%d\n", a);
	a = a + 10;   // (=) a += 10;
	return a;
}

int func2()
{
	printf("%d\n", a);
	a = a + 10;
	return a;
}