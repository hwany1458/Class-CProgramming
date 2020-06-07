#include <stdio.h>
void main(void)
{
	int i, s;
	s = 0;
	i = 1;
	do {
		s += i;
		++i;
	} while (i <= 50);
	printf("Sum from 1 to 50 = %d\n", s);
}