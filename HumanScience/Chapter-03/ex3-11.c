#include <stdio.h>
int main(void)
{
	char a[50];
	printf("Type int size : %d bytes.\n", sizeof(int));
	printf("Type char size : %d bytes.\n", sizeof(char));
	printf("Type char a[50] size : %d bytes.\n", sizeof(a));
	printf("Type long size : %d bytes.\n", sizeof(long));
	printf("Type double size : %d bytes.\n", sizeof(double));
	return 0;
}