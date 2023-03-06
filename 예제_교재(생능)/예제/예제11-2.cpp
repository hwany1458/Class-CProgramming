#include <stdio.h>
int add(int b);
int a = 10;
int main(void)
{
	printf("a=%d\n", a);
	printf("%d\n", add(a));
	printf("a=%d\n", a);
	return 0;
}

int add(int b)
{
	b = b + 5;
	a = a + 5;
	return b;
}

