#include <stdio.h>
void main()
{
	int i;
	for (i = 65; i <= 90; i++) {
		printf("%c", i);
	}
	printf("\n");

	i = 65;
	while (i <= 90) {
		printf("%c", i++);
	}
	printf("\n");

	i = 65;
	do {
		printf("%c", i++);
	} while (i <= 90);
	printf("\n");
}