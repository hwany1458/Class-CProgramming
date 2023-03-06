#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
	int i;
	system("cls");
	gotoxy(35, 10);
	printf("C언어 프로그램 과제\n");
	gotoxy(37, 11);
	printf("작성자:홍길동\n");
	return 0;
}

void gotoxy(int x, int y)
{
	COORD Pos = { x - 1, y - 1 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

