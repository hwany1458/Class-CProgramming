#include <stdio.h>
void main()
{
	int a = 5, b = 14, c = 0;
	int d, e, f, g;
	d = a && b; /* AND */
	e = a || b; /* OR */
	f = a && c; /* AND */
	g = !c; /* NOT */
	printf(" %d && %d = %d\n", a, b, d);
	printf(" %d || %d = %d\n", a, b, e);
	printf(" %d && %d = %d\n", a, c, f);
	printf(" !%d = %d\n", c, g);
}