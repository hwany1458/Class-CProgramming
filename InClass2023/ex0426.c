#include <stdio.h>
void main04261()
{
	// 1개의 정수(점수)를 입력받아, 학점(A,B,C,D,F)를 출력하세요
	// [힌트] switch문 사용
	printf("점수(정수)를 입력하세요 ");
	//변수 사용방법 (1)변수선언, (2)값을할당
	int score;  //1
	//score = 100; //2
	scanf_s("%d", &score); //2

	// if else if문을 사용한 경우 (이전 참조)
	if ((100 <= score) && (score >= 90)) { printf("A\n"); }
	else if ((score < 90) && (score >= 80)) { printf("B\n"); }
	else if ((score < 80) && (score >= 70)) { printf("C\n"); }
	else if ((score < 70) && (score >= 60)) { printf("D\n"); }
	else { printf("F\n"); }

	// switch문
	switch (score/10)  // 나눗셈(몫)을 계산해서 10단위 값을 계산
	{
	case 10: //printf("학점은 A\n"); break;
	case 9: printf("학점은 A\n"); break;
	case 8: printf("학점은 B\n"); break;
	case 7: printf("학점은 C\n"); break;
	case 6: printf("학점은 D\n"); break;
	default : printf("학점은 F\n"); break;
	}



}