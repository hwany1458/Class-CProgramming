#include <stdio.h>
void main()
{
	int i;
	for (i = 0; i <= 7; i++) {
		if (i == 5)
			continue;
		else
			printf("%d\n", i);
	}
}