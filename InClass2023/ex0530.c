#include <stdio.h>
#include <math.h>

// 함수원형 선언 
// 데이터타입 함수명(매개변수);
int YongHwan(int a);
int TaeHee(int i);
int GunHee(int a, int b);

// 함수선언, 함수정의, 함수호출을 하세요
// 4개의 정수를 입력받아, 합을 계산하고 반환(A,B,C,D,F)하는 함수
// 입력 : 중간, 기말, 출석, 과제 점수 (정수 4개)
// 출력 : 문자 char

void main()
{
	printf("2개 실수를 입력하세요 ");
	double x, y;

	scanf_s("%lf %lf", &x, &y);

	// 식1
	printf("%lf, %lf\n", x, y);
	printf("식1 =  %lf\n", pow(x, 2.0) + pow(y, 2.0));
	printf("식2 =  %lf\n", pow((x+y), 2.0));
	// 식3
	// 식4

	printf("정수를 입력하세요 ");
	int f;
	scanf_s("%d", &f);

	printf("결과는 %d입니다\n", YongHwan(f));
	printf("절대값 결과는 %d입니다\n", TaeHee(f));

	// 반복문을 써서, 1~100 까지의 제곱을 출력하세요.
	for (int i = 1; i <= 100; i++)
	{
		printf("%d의 제곱은 %d입니다\n", i, YongHwan(i));
	}

	// 건희 호출
	
	printf("덧셈 결과는 %d입니다\n", GunHee(100, 200)	);
}

// 함수정의
// 데이터타입 함수명(매개변수) { 처리하는 동작 }
// 함수는 입력, 처리부분, 출력을 갖는데
// 입력은 매개변수 위치에,
// 처리부분은 처리하는 동작 위치에,
// 출력은 데이터타입 위치에
int YongHwan(int a)
{
	// (1) 제곱을 계산
	int res;
	res = a * a;

	// (2) 결과를 반환
	return res; // 반환하는 명령
}

int TaeHee(int i)
{
	// 절대값을 계산
	int res;
	if (i >= 0)
	{
		res = i;
	}
	else
	{
		res = -i;
	}

	// 결과 반환
	return res;
}

int GunHee(int a, int b)
{
	return (a + b);
}