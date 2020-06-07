#include <stdio.h>
void main(void)
{
	int x, y;
	char xy;

	while (1) {
		printf("**** result ****\n\n");
		printf("Input x ? ");
		scanf_s("%d", &x);
		rewind(stdin);
		printf("Input xy -- operator ? ");
		scanf_s("%c", &xy, sizeof(char)); // 문자는 * / + - 입력
		rewind(stdin);
		printf("Input y ? ");
		scanf_s("%d", &y);
		rewind(stdin);

		switch (xy) {
		case '*': printf("%d * %d = %d\n\n", x, y, x * y);
			break;
		case '/': printf("%d / %d = %d\n\n", x, y, x / y);
			break;
		case '+': printf("%d + %d = %d\n\n", x, y, x + y);
			break;
		case '-': printf("%d - %d = %d\n\n", x, y, x - y);
			break;
		default: printf("%c is unknown operator\n\n", xy);
		}
	}
}