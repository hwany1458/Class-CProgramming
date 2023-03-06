#include <stdio.h>
void main()
{
   int y, month, day;
   printf("년도를 입력하고 Enter>");
   scanf("%d", &y);
   printf("달을 입력하고 Enter>");
   scanf("%d", &month);
   switch(month)
   {
    case 1 : day=31; break;
    case 2 : day=28; break;
    case 3 : day=31; break;
    case 4 : day=30; break;
    case 5 : day=31; break;
    case 6 : day=30; break;
    case 7 : day=31; break;
    case 8 : day=31; break;
    case 9 : day=30; break;
    case 10 : day=31; break;
    case 11 : day=30; break;
    case 12 : day=31; break;
  }
  if ((y % 4 ==0 && y %100 !=0) || y % 400 == 0)
	day=29;
 printf("%d년의 %d월달은 날짜수가 %d입니다.\n", y,month, day);
}

