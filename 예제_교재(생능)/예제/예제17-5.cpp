#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  char chr[8];
  FILE *fp;
  fp=fopen("worldcup.txt", "r");
  if (fp==NULL)
    {
     printf("File open에 오류 발생");
     exit(1);
    }
  while(!feof(fp))
   {
    fgets(chr,7,fp);
    printf("%s", chr);
   }
 fclose(fp);
 return 0;
}
