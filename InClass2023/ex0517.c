#include <stdio.h>
// 수학함수를 사용하기 위해 라이브러리 추가
#include <math.h>

void main()
{
	int inNum;
	int result;
	double resultDouble;

	printf("정수를 입력하세요 ");
	scanf_s("%d", &inNum);

	// abs() 함수 -- 절대값 구하는 함수를 호출
	// 함수호출 방법은 -- 함수이름([매개변수들])
	// 매개변수 = 함수호출할 때 (함수에게) 넘겨주는 데이터
	// 호출함수이 되면, 그 위치에 함수 실행결과(반환데이터)가 들어옴
	result = abs(inNum);
	printf("결과값은 %d입니다\n", result);

	// 2의 3승을 계산
	//resultDouble = pow(2.0, 3.0);

	// result로 구해진 절대값은 정수형 
	// -- pow()는 매개변수로 실수형을 받아
	// -- 매개변수를 넘겨주기 전에 형변환을 시행

	resultDouble = pow((double)result, (double)result);
	printf("결과는 %f\n", resultDouble);

	// 
}