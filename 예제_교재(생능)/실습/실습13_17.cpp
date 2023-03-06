#include <stdio.h>
int main(void)
{
	char nation[4][20];
	int i;
	for (i = 0; i < 4; i++)
	{
		printf("국가이름을 한글로 입력하고 Enter>");
		gets(nation[i]);
	}
	for (i = 3; i >= 0; i--)
		printf("%s\n", nation[i]);
	return 0;
}

