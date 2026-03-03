#include <stdio.h>
void main()
{
	int i;
	do
	{
		printf("0을 입력하면 종료함\n");
		printf("숫자 입력 후 Enter>");
		scanf("%d", &i);
	} while (i != 0);
}
