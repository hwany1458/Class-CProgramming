#include <stdio.h>
void main()
{
	// 데이터크기를 확인하기 위한 명령(함수) - sizeof()

	int a = 0;	// (1)a라는 이름으로 정수형 변수를 선언
				// (2)a변수에 0값을 대입(값 할당) 
				// 변수선언하면서 값을 할당하는 경우 (초기화)
	printf("int로 선언된 정수크기 = %d바이트\n", sizeof(int));
	printf("int로 선언된 변수 크기 = %d바이트\n", sizeof(a));

	// (키보드로부터 사용자의) 입력을 받는 명령(함수)
	int b;
	//scanf("%d", &b);
	//scanf_s("%d", &b, sizeof(b));
	printf("정수를 입력하고 엔터를 치세요 ");
	scanf_s("%d", &b);
	printf("입력받은 값은 %d입니다\n", b);
}