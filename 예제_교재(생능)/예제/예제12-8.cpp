#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main(void)
{
	int i;
	for (i = 1; i <= 9; i++)
	{
		system("cls");
		printf("%d*%d=%d\n", 1, i, 1 * i);
		printf("아무키나 누르시오.\n");
		getch();
	}
	return 0;
}
