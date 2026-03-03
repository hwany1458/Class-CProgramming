#include <stdio.h>
void main()
{
   int y;
   printf("년도를 입력하고 Enter>");
   scanf("%d", &y);
  if ((y % 4 ==0 && y %100 !=0) || y % 400 == 0)
	printf("%d년은 윤년입니다.\n", y);
  else
	printf("%d년은 평년입니다.\n", y);
}

