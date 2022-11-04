#include <stdio.h>
void main()
{
	int x = 0;
increment: x = x + 1;
	printf("x = %d \n", x);
	if (x <= 10)
		goto increment;
}