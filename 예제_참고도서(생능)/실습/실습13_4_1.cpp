//[예제 13-1]의 방법
#include <stdio.h>
int main(void)
{
 int korea[4]={15, 17, 27, 32};
 int china[4]={27, 16, 19, 11};
 for(int i=0;i<4;i+=1)
  printf("%d %d\n",korea[i],china[i]);
 return 0;
}


