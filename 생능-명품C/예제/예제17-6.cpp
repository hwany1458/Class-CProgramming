#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 char *team[4]={"스위스","프랑스",
                   "대한민국","토고"};
 int marks[4]={4, 3, 3, 1};
 int  i;
 FILE *fp;
 fp=fopen("2006cup.txt", "w");
 if (fp==NULL)
  {
    printf("File open에 오류 발생");
    exit(1);
  }
 for(i=0;i<=3;i++)
  {
   printf("%s %d\n", team[i], marks[i]);
   fprintf(fp, "%s %d\n", team[i], marks[i]);
  }
 fclose(fp);
 return 0;
}
