//10도씩 증가
#include <stdio.h>
void main()
{
   for(int  f=0;f<=100;f+=10) 
      printf("화씨온도 %3d는 섭씨온도로 %3d\n", f, 5*(f-32)/9);
}

