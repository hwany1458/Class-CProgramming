#include <stdio.h>
void main()
{
	int mice1, mice2;
	mice1 = 1.6 + 1.7; // 자동형변환
	mice2 = (int)1.6 + (int)1.7; // 강제형변환
	printf(" 자동형변환= %d\n 강제형변환= %d\n", mice1, mice2);
}