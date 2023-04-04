#include <stdio.h>
void main0404()
{
	// 변수선언
	int kor, eng, mat;  // 국영수 점수

	printf("국어 영어 수학 점수를 입력하세요 ");
	/*
	scanf_s("%d", &kor);
	scanf_s("%d", &eng);
	scanf_s("%d", &mat);
	*/

	int a; //(1)변수선언
	a = 100; //(2)값할당

	const int b = 200;  // 상수선언
	//b = 300;

	// 한번 입력받음
	scanf_s("%d %d %d", &kor, &eng, &mat);
	
	// 총점 kor+eng+mat
	printf("총점=%d점, 평균점수=%.2f\n", kor+eng+mat, (double)(kor+eng+mat)/3.0);
}