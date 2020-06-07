#include <stdio.h>
void main()
{
	char ch;
	scanf_s("%c", &ch, sizeof(char));
	switch (ch) {
	case 'a': printf("ch is a\n");
		break;
	case 'b': printf("ch is b\n");
		break;
	case 'c': printf("ch is c\n");
		break;
	case 'd': printf("ch is d\n");
		break;
	case 'f': printf("ch is f\n");
		break;
	default: printf("I don't know\n");
	}
}