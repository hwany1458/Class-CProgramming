#include <stdio.h>
void main()
{
	char flag; //비트연산 편의상 char형 변수 사용
	flag = 0x50;

	printf("1번 전원이 %s져있습니다. \n", ((flag & 0x01) != 0) ? "켜" : "꺼");
	printf("5번 전원이 %s져있습니다. \n", ((   ) != 0) ? "켜" : "꺼");
	printf("7번 전원이 %s져있습니다. \n", ((flag & 0x40) != 0) [   ]);
}