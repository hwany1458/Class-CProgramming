#include <stdio.h>
void main()
{
	int x, y;
	printf("**** result *****\n\n");
	printf("Input x y == ? ");
	scanf_s("%d %d", &x, &y);
	if (x + y > 0) {
		printf("x+y is greater than zero\n");
	}
	else {
		printf("x+y is equal to or less than zero\n");
	}
}