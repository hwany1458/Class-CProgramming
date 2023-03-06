#include <stdio.h>
void main()
{
  for(double line=10;line<=20;line+=2) 
  {
     printf("삼각형의 높이 : 10, 밑변 : %.2f, 면적 : %.2f\n", line, line*10/2);
     printf("사각형의 높이 : 10, 밑변 : %.2f, 면적 : %.2f\n", line, line*10);
  }
}

