#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char c;
  FILE *fp;
  fp=fopen("chr.txt", "r");
  if (fp==NULL)
   {
    printf("File open에 오류 발생");
    exit(1);
   }
  while((c=fgetc(fp))!=EOF)
  {
   printf("%c", c);
  }
 fclose(fp);
 printf("\n");
 return 0;
}
