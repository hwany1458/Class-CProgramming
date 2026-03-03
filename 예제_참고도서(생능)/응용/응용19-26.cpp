#include<stdio.h>
#include<stdlib.h>
int menu_display1(void);
int menu_display2(void);
void sub_menu(void);
void guguall(void);
void gugusel(void);
void presskey(void);
int main(void)
{
 int c;
 while((c=menu_display1()) != 2)
  {
  switch(c)
     {
       case 1 : sub_menu();
	   break;
       default : break;
     }
  }
 return 0;
}

void sub_menu()
{
 int c;
 while((c=menu_display2()) != 3)
 {
  switch(c)
	{
	 case 1 : guguall();
 	    break;
	 case 2 : gugusel();
	    break;
	 default : break;
	}
 }
}


int menu_display1(void)
{
 int select;
 system("cls");
 printf("구구단 프로그램\n\n");
 printf("1. 구구단 출력\n");
 printf("2. 프로그램 종료\n\n");
 printf("메뉴번호 입력후 Enter>");
 scanf("%d", &select);
 return select;
}

int menu_display2(void)
{
 int select;
 system("cls");
 printf("구구단 출력\n\n");
 printf("1.구구단 전체 출력\n");
 printf("2.원하는 단만 출력\n");
 printf("3.이전 메뉴로 \n\n");
 printf("메뉴번호 입력후 Enter>");
 scanf("%d", &select);
 return select;
}



void guguall(void)
{
 int i, j;
 system("cls");
 printf("구구단 전체 출력\n\n");
 for(i=1; i<=9; i++)
  {
   for(j=1; j<=9; j++)
    printf("%d*%d=%2d ", j,i,j*i);
   printf("\n");
  }
 presskey();
}

void gugusel(void)
{
 int i, dan;
 system("cls");
 printf("원하는 단만 출력 \n\n");
 printf("출력할 단을 입력하고 Enter>");
 scanf("%d", &dan);
 for(i=1; i<=9; i++)
  printf("%d*%d=%2d \n",dan,i,dan*i);
 presskey();
}

void presskey(void)
{
 char c;
 fflush(stdin);
 printf("\n\n");
 printf("Enter를 누르면 메인 메뉴로...");
 scanf("%c",&c);
}

