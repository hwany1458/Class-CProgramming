#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char na[10];
	int vic;
	int tie;
	int def;
 } worldcup;
int main(void)
{
 FILE *fp;
 worldcup d;
 long total_block, block_number;
 fp=fopen("d-group.bin", "rb");
 if(fp==NULL)  
 {
   printf("File Open에 오류 발생 !");
   exit(1);
 }
 fseek(fp, 0L, SEEK_END);
 total_block=ftell(fp)/sizeof(worldcup);
 printf("전체 block의 숫자는 %d 입니다.\n", total_block);
 while(1) {
   printf("원하는 block의 숫자(1-%d)를 입력하고 Enter >", total_block);
   scanf("%ld", &block_number);
   fflush(stdin);
   if (block_number> total_block)
     break;
   fseek(fp, sizeof(worldcup)*(block_number-1), SEEK_SET);
   if (fread(&d, sizeof(worldcup), 1, fp) !=1) {
     printf("File read Error !");
     exit(1);
     }
   printf("\n현재 block 위치 : %d\n", block_number);
   printf("국가이름 승 무 패\n");
   printf("%-8s %2d %2d %2d\n\n",d.na,d.vic,d.tie,d.def);
  }
 fclose(fp);
 return 0;
}
