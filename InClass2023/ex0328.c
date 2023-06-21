#include <stdio.h>

void main()
{
	// 변수사용 : (1)변수선언, (2)값할당
	int a;    // a라는 이름으로 정수형 변수를 선언
	a = 10;   // 10값을 변수a에 할당(넣는다, 대입한다)
	// int a = 10;

	// 상수
	const int b = 100;  // b라는 이름으로 정수형 상수를 선언
	const double PI = 3.15159;

	printf("a=%d, b=%d 입니다\n", a ,b);

	a = 200; 
	// ... 쭉쭉쭉 실행하다가 ...

	a = 1000;
	// (앞에서) 상수로 선언했는데, 값을 변경해보면 ...
	// 에러발생 (C2166....)
	//b = 20000;
	printf("a=%d, b=%d 입니다\n", a, b);

	// 값을 형변환
	printf("%d + %d = %d\n", 10, (int)20.1, 10+20);

	int c = 100;
	printf("%f\n", (double)c);

	char d = 'A';
	printf("%d\n", (int)d);

}