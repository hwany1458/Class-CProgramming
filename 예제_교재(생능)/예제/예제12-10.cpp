#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void gotoxy(int x, int y);
int main(void)
{
 int i;
 system("cls");
 for(i=1;i<=9;i++)
 {
   gotoxy(i, i);
   printf("%d*%d=%d\n", 1, i, 1*i);
 }
 return 0;
}
void gotoxy(int x, int y)
{
   COORD Pos = {x - 1, y - 1};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
