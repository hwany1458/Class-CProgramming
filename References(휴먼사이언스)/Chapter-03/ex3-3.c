#include <stdio.h>
int main(void)
{
	int i, j, k;
	float f;
	i = 7;
	j = 9;
	k = i / j;
	f = (float)i / (float)j;
	printf("i=%d j=%d (int)i/j=%d (float)i/j=%f \n", i, j, k, f);
	return 0;
}