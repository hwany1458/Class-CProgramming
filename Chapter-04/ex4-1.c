#include<stdio.h>
void main()
{
	int a, b, c, x;
	x = 2 + (2 * 4) - 5;
	printf("x = %d\n", x);
	x = 2 * 4 % 3 / 2;
	printf("x = %d\n", x);
	x = -2 - (3 * 4) + (5 % 6);
	printf("x = %d\n", x);
	x = x + 5;
	printf("x = %d\n", x);
	a = b = c = 3;
	printf("a = %d\n", a); //(a=(b=(c=3)) ¡Ô, a=3,b=3,c=3 )
	a = -2 + (6 % 4);
	printf("a = %d\n", a);
}