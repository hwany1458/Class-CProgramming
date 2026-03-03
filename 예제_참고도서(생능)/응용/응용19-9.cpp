#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
 int i,dan[10],num[10];
 srand(time(NULL));
 for(i=0;i<10;i++)
 {
    dan[i]=rand()%9+1;
    num[i]=rand()%9+1;
 }
 printf("구구단 문제풀기\n\n");
 for(i=0;i<10;i++)
    printf("%2d: %d*%d=?\n", i+1, dan[i], num[i]);
 return 0;
}
