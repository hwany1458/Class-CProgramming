#include <stdio.h>
#define number 0xAB3E
void main()
{
	int x, y;
	x = 21;
	y = 71;
	printf("x=%d y=%d\n", x, y);
	y = x & (~number);
	printf("y=%d\n", y);
	y &= 5;
	printf("y=%d\n", y);
	y = x >> 5;
	printf("y=%d\n", y);
	y = x << 10;
	printf("y=%d\n", y);
}