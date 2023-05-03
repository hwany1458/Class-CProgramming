#include <stdio.h>

void main()
{
	// 키보드로부터 정수를 입력받아, 구구단(몇단)을 출력
	printf("(출력을 원하는 구구단의) 정수(1~9)를 입력하세요 ");
	int num;
	scanf_s("%d", &num);

	//for(초기식; 조건식; 증감식) { .. }
	for (int i = 1; i < 10; i++)
	{
		printf("%d * %d = %d\n", num, i, num*i);
	}

	// 팩토리얼 구하기
	int fac = 1;
	for (int i = num; i > 0; i--)
	{
		fac = fac * i;  // (=) fac *= i;
	}
	printf("%d 팩토리얼은 %d 입니다\n", num, fac);

	// 입력받은 수까지 누적합을 구하세요  n*(n-1)/2
	int sum = 0;
	for (int i = 1; i <= num; i++)
	{
		sum = sum + i;  // (=) sum += i;
	}
	printf("%d까지의 누적합은 %d입니다\n", num, sum);

	// 입력받은 수까지 홀수만의 누적합을 구하세요  
	// (1) 조건문써서 (2) 2씩 더한다
	// (1방법)
	int oddsum = 0;
	for (int i = 1; i <= num; i++)
	{
		if ((i%2) == 1) {
			oddsum = oddsum + i;  // (=) oddsum += i;
		}
	}
	printf("1번째 방법]%d까지의 홀수 누적합은 %d입니다\n", num, oddsum);

	// (2방법)
	int oddsum2 = 0;
	for (int i = 1; i <= num; i+=2)
	{
		oddsum2 = oddsum2 + i;  // (=) oddsum2 += i;
	}
	printf("2번째 방법] %d까지의 훌수 누적합은 %d입니다\n", num, oddsum2);

	// 2개의 정수(a, b)를 입력 받아, 두 수 사이의 누적합을 구하세요
	// 고려할 사항 ( a>b, a<b )
	int a, b;
	printf("2개 정수를 입력하세요 ");
	scanf_s("%d %d", &a, &b);
	//(1방법) 
	// a<b : a부터 b까지 오름차순으로 반복
	// a>b : a부터 b까지 내림차순으로 반복
	// a=b :
	int s1 = 0;
	if (a <= b)  // a<b 또는 a=b 일때
	{
		for (int i = a; i <= b; i++)
		{
			s1 = s1 + i;
		}
	}
	else  // a>b 일때
	{ 
		for (int i = a; i >= b; i--)
		{
			s1 = s1 + i;
		}
	}
	printf("(1번방법) %d부터 %d까지의 누적합은 %d입니다\n", a, b, s1);


	// (2번째 방법)
	// a<b : 그대로
	// a>b : a와 b를 바꿔서, 계산함
	int s2 = 0;
	/*
	if (a <= b) {}
	else 
	*/
	if (a > b)
	{
		int temp;
		temp = b;
		b = a;
		a = temp;
	}
	for (int i = a; i <= b; i++)
	{
		s2 = s2 + i;
	}
	printf("(2번방법) %d부터 %d까지의 누적합은 %d입니다\n", a, b, s2);
}