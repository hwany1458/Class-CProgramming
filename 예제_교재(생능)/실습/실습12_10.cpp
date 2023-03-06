#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
	int i, j;
	for (j = 1; j <= 9; j++)
	{
		system("cls");
		for (i = 1; i <= 9; i++)
		{
			gotoxy(36, 6 + i);
			printf("%d*%d=%2d\n", j, i, j * i);
		}
		gotoxy(32, 16);
		printf("아무키나 누르시오.\n");
		getch();
	}
	return 0;
}
void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


