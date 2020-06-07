#include <stdio.h>
void main()
{
	while (1) {
		if (getchar() == '#')
			goto outside;
	}

outside: printf("loop----end\n");
}