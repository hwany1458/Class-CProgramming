#include <stdio.h>
void main()
{
	int n = 1;
	int i, j, k;
	for (i = 0; i < 3; i++) {
		printf("\n i-블록\n");
		for (j = 0; j < 26; j++) {
			printf("j-블록\n");
			for (k = 0; k < 2; k++) {
				printf("k-블록");
				printf(" 회수= %d\n", n++);
			}
		}
	}
}