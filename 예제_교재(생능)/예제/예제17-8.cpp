#include <stdio.h>
#include <stdlib.h>
#define filename "grade01.txt"
int main(void)
{
  char names[20];
  int score;
  int  i;
  FILE *fp;
  if ((fp=fopen(filename, "w"))==NULL)
   {
    printf("File open에 오류 발생");
    exit(1);
   }
  printf("이름과 점수를 입력하고 Enter\n");
  for(i=0;i<=2;i++)
   {
    scanf("%s %d", names, &score);
    fprintf(fp, "%s %d\n", names, score);
    getchar();
   }
 fclose(fp);
 return 0;
}
