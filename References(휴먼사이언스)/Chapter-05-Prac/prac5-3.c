#include <stdio.h>
void main()
{
	int x, y;
	char xy;
	printf("**** result ****\n\n");
	printf("Input x xy y == ? ");
	scanf("%d %c %d", &x, &xy, &y); // 문자는 * / + - 입력
	if (xy == '*')
		printf("%d * %d = %d\n", x, y, x * y);
	[       ]
		printf("%d / %d = %d\n", x, y, x / y);
	[       ]
		printf("%d + %d = %d\n", x, y, x + y);
	[       ]
		printf("%d - %d = %d\n", x, y, x - y);
}