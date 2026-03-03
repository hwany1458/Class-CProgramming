//[예제 13-2]의 방법
#include <stdio.h>
int main(void)
{
 int korea[4], china[4];
 korea[0]=15; china[0]=27;
 korea[1]=17; china[1]=16;
 korea[2]=27; china[2]=19;
 korea[3]=32; china[3]=11;
 for(int i=0;i<=3;i+=1)
  printf("%d %d\n",korea[i],china[i]);
 return 0; 
}

