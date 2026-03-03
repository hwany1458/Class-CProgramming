#include <stdio.h>
void main()
{
	int sum = 1, i, j;
	for (i = 0, j = 100; sum != 0; i += 4, j -= 6)
	{
		sum = i - j;
		printf("sum=%d i=%d j=%d\n",sum, i, j);
	}
}





