#include <stdio.h>

// 4개의 정수를 입력받아, 합을 계산하고 반환(A,B,C,D,F)하는 함수
// 입력 : 중간, 기말, 출석, 과제 점수 (정수 4개)
// 출력 : 문자 char

// 함수선언
// 반환되는데이터타입 함수명(매개변수);
char credit(int a, int b, int c, int d);

// 1개 정수를 (입력)받아서, +1한 결과를 출력하고 끝나는 함수 (반환값 없음)
void ChoonIl(int a);

void main()
{
	// 중간30, 기말30, 출석20, 과제20
	printf("천일 C언어 성적은 %c\n", credit(25, 25, 19, 20));
	printf("지웅 C언어 성적은 %c\n", credit(30, 30, 20, 20));

	ChoonIl(8);
}

// 함수정의
char credit(int a, int b, int c, int d)
{
	// (1) 합 계산
	int sum = a + b + c + d;

	// (2) 학점 구분
	char ch;
	if ((100 >= sum) && (sum >= 90)) { ch = 'A'; }
	else if ((90 > sum) && (sum >= 80)) { ch = 'B'; }
	else if ((80 > sum) && (sum >= 70)) { ch = 'C'; }
	else if ((70 > sum) && (sum >= 60)) { ch = 'D'; }
	else { ch = 'F'; }

	// (3) 결과 반환
	// 체크
	// 반환데이타가 (선언되어) 있는데, return을 쓰지 않은 경우 (경고 나옴)
	// 이런 메시지 : 'credit': 값을 반환해야 합니다.
	return ch;
}

// 1개 정수를 (입력)받아서, +1한 결과를 출력하고 끝나는 함수 (반환값 없음)
void ChoonIl(int a)
{
	printf("넘어온 값+1은 %d입니다\n", a+1);
	//반환값이 없음 --> 반환되는 데이타타입 = void
	// return 명령을 쓰지 않음

	// 체크
	// 반환타입 void 인데, return을 쓴 경우 (경고 나옴)
	// 이런 메시지 : 'void' 함수에서 값을 반환하고 있습니다.
	//return a + 1;
}

