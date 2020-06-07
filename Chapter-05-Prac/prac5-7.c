#include <stdio.h>
void main(void)
{
	int i, s;
	s = 0;
	for (i = 1; i <= 50; i++) {
		s += i;
	}
	printf("Sum from 1 to 50 = %d\n", s);
}