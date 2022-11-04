#include <stdio.h>
void main()
{
	int i, j;
	for (i = 0; i <= 5; i++) {
		if (i == 1) break;
		for (j = 0; j <= 5; j++) {
			if (j == 3) break;
		}
	}
	printf("i = %d j = %d\n", i, j);
}