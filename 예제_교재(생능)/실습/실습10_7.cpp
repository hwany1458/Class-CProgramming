#include <stdio.h>
int multiply(int a, int b);
void main()
{
	int a, b;
	printf("정수 a를 입력하고 Enter>");
	scanf("%d", &a);
	printf("정수 b를 입력하고 Enter>");
	scanf("%d", &b);
	printf("a*b=%d\n", multiply(a, b));
}

int multiply(int a, int b)
{
	return a * b;
}
