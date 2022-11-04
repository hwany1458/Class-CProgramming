#include <stdio.h>
void main()
{
	int x;
	int y;
	printf("y값을 입력하시오 = ");
	scanf_s("%d", &y); // y=3;
	x = (y < 0) ? -y : y;
	printf("y= %d일 때, x의 대입된 값은 %d입니다\n \n", y, x);
}