#include <stdio.h>
void main()
{
	int x = 0;
	if (x <= 10) {
	increment: x = x + 1;
		printf("x = %d \n", x);
	}
	goto increment;
}