#include <stdio.h>
void main()
{
	int a = 1, b = 0, c = 5;
	float d = 1.2;

	// 논리연산
	// && (둘다 참일 때 참), || (둘다 거짓일때만 거짓)
	printf("AND 연산 %d\n", a && b);
	printf("OR 연산 %d\n",  a || b);
	printf("NOT 연산 %d\n", !a);
	
	// 비트연산 중 시프트연산
	printf("left shift 연산 %d\n", c << 1);
	// 컴마연산
	printf(", 연산 예 %d\n", (b++, a+=b));
	//캐스트연산
	printf("형변환 %d\n", (int)d);

	// 조건연산 (--?--:--)
	printf("조건연산 %d\n", ((a>b) ? (++a) : (++b)) );

}