#include<stdio.h>
#include<stdlib.h> //함수 abs, srand, rand 호출
#include<time.h>  //함수 time 호출
int main(void)
{
 int i=0, k,m, diff;
 srand(time(NULL));
 k=rand()%99+1;
 printf("숫자 알아 맞추기 게임\n\n");
 printf("1부터 99사이의 숫자를 입력하세요.\n");
 printf("0을 입력하면 종료\n\n");
 while(1)
 {  
    i++;
    printf("시도한 횟수 : %d, ",i);
    printf("숫자 입력후 Enter>");
    scanf("%d",&m);
    if(m==0)
	break;
    printf("입력한 숫자가 ");
    if(k==m)
     { printf("맞았음\n");
       break;
     }
    diff=k-m;
    if (abs(diff)<25)
      printf("조금 ");
    else
      printf("아주 ");
    if (diff<0)
      printf("높음\n\n");
    else
      printf("낮음\n\n");
  }
 printf("컴퓨터의 숫자 : %d \n", k);
 return 0;
}
