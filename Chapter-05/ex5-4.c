#include <stdio.h>
void main()
{
	char c;
	printf("문자형 한 자리 문자를 넣으시오= ");
	scanf_s("%c", &c, sizeof(c)); // 1개 문자 입력 후 엔터키를 친다.
	switch (c) {
	case 'a': printf("문자'a'를 출력합니다.\n"); break;
	case 'b': printf("문자'b'를 출력합니다.\n"); break;
	case 'c': printf("문자'c'를 출력합니다.\n"); break;
	case 'd': printf("문자'd'를 출력합니다.\n"); break;
	default: printf("문자'a,b,c,d'외 문자가 입력되었습니다.\n");
	}
}