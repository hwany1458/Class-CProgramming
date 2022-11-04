#include <stdio.h>
void main()
{
	char a = '0';
	int i = 0;
	while (a) {
		if (a < '9') {
			printf("\'0\' = ASCII 문자 %d 숫자 %c", a, a);
			printf(" 반복수 %d \n", ++i);
		}
		else break;
	}
}