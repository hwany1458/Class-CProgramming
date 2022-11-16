#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 FILE *fp;
 fp=fopen("worldcup.txt", "w");
 if (fp==NULL)	
  {
    printf("File open에 오류 발생");
    exit(1);
  }
 fputs("Korea\n", fp);
 fputs("Germany\n", fp);
 fputs("Brasil\n", fp);
 fputs("Turkey\n", fp);
 fclose(fp);
 return 0;
}
