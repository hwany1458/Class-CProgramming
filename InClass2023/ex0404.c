#include <stdio.h>
void main()
{
	// 변수선언
	int kor, eng, mat;  // 국영수 점수

	printf("국어 영어 수학 점수를 입력하세요 ");
	/*
	scanf_s("%d", &kor); 
	scanf_s("%d", &eng); 
	scanf_s("%d", &mat); 
	// (키보드로부터 정수 입력 후 엔터를 반복적으로)
	*/
	// 한번에 입력받음
	scanf_s("%d %d %d", &kor, &eng, &mat);

	// 총점 kor+eng+mat
	printf("총점=%d점, 평균점수=%d\n", kor + eng + mat, (kor + eng + mat) / 3);
	// 평균점수를 실수로 계산하려면, 정수에서 실수로 형변환
	printf("총점=%d점, 평균점수=%.2f\n", kor + eng + mat, (double)(kor + eng + mat) / 3.0);

	// -------------------- 6장 연산자 (산술연산자)

	int a = 10, b = 3;
	// 정수 : 사칙연산, 나머지연산(%)
	// 정수의 산술연산은 결과가 정수
	// 나눗셈연산(몫), 모드연산(나머지) 
	printf("%d, %d, %d, %d, %d\n", a + b, a - b, a * b, a / b, a % b);

	float c = 10.0, d = 3.0;
	// 실수 : 사칙연산
	printf("%.1f, %.1f, %.1f, %.1f\n", c + d, c - d, c * d, c / d);

	// 증가, 감소 연산자는 각각 (+1), (-1)을 시킴
	// ++가 변수 앞에 있는지, 뒤에 있는지에 따라 연산을 후행하는지, 선행하는지를 결정
	printf("%d\n", ++a);
	printf("%d\n", a++);

	// 대입 연산자 (산술연산과 대입연산을 합쳐서 적용)
	// a = a + b; 와 동일한 결과
	// a + b를 연산한 다음, a로 덮어쓴다 (overwrite)
	a += b;
	printf("%d\n", a);

	// 반지름을 입력받아 원의 둘레와 면적을 계산
	double r;
	const double pi = 3.14159;
	printf("반지름을 입력하세요 ");
	scanf_s("%lf", &r);
	printf("원 둘레=%lf, 면적=%lf\n", 2*pi*r, pi*r*r);
}