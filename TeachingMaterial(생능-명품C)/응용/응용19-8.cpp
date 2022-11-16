#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
 char *psr[3]={"가위","바위","보"};
 int com, you;
 srand(time(NULL));
 printf("가위바위보 게임\n\n");
 printf("가위(1),바위(2),보(3)중에서\n");
 printf("숫자를 입력하세요. \n");
 printf("종료는 0을 입력하세요.\n");
 while(1)
 {
  com=rand()%3+1;
  printf("시작 : 숫자입력 후 Enter>");
  scanf("%d", &you);
  if (you==0)
	 break;
  printf("컴퓨터는 %s, 당신은 %s\n", psr[com-1], psr[you-1]);
  printf("결과 :");
  if (com==1)
      if (you==1) printf("비겼습니다. \n");
      else if (you==2) printf("당신이 이겼습니다.\n");
      else printf("컴퓨터가 이겼습니다.\n");
  else if (com==2)
     if (you==1) printf("컴퓨터가 이겼습니다.\n");
     else if (you==2) printf("비겼습니다. \n");
     else printf("당신이 이겼습니다.\n");
  else
     if (you==1) printf("당신이 이겼습니다.\n");
     else if (you==2) printf("컴퓨터가 이겼습니다.\n");
     else printf("비겼습니다. \n");
     printf("\n");
 }
 printf("게임을 종료합니다. \n");
 return 0;
}
