#include <stdio.h>
void main()
{
	int i;
	printf("======= while result =======\n\n");
	i = 1;
	while (i > 5)
	{
		printf("%d\n", i);
		i++;
	}
	printf("\n");
	printf("======= do-while result =======\n\n");
	i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while (i > 5);
	printf("\n");
}