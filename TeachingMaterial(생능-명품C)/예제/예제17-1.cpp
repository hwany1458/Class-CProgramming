#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 FILE *fp;
 char c;
 fp=fopen("chr.txt", "w");
 if (fp==NULL)
  {
    printf("File open에 오류 발생");
    exit(1);
  }
 printf("Enter가 사용될 때까지 문자출력\n");
 printf("문자입력 : ");
 while ((c = getchar()) != '\n')
  {  
   printf("%c", c);
   fputc(c, fp);
  }
 fclose(fp);
 printf("\n");
 return 0;
} 
