#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct  {
	char na[10];
	int vic;
	int tie;
	int def;
 } worldcup;
char *file="d-group.bin";
void change_data(void);
int main(void)
{
  change_data();
  return 0;
}
void change_data(void)
{
 int i, block_number, total_block;
 FILE *fpr;
 worldcup  d[10];
 fpr=fopen(file, "rb+");
 if(fpr==NULL) 
  {
    printf("File Open에 오류 발생 !");
    exit(1);
 }
 fseek(fpr, 0L, SEEK_END);
 total_block=ftell(fpr)/sizeof(worldcup);
 rewind(fpr);
 fread(d, sizeof(worldcup), total_block, fpr);
 printf("\n전체 data \n\n");
 printf("block 국가이름 승 무 패\n");
 for(i=0;i<total_block;i++)
 printf("%d %-8s%3d%3d%3d\n",i,d[i].na,d[i].vic,d[i].tie,d[i].def);
 printf("\n승점을 수정하려는 block의 번호를 입력>");
 scanf("%d", &block_number);
 fflush(stdin);
 printf("국가명 : %s\n", d[block_number].na);
 printf("수정할 승점 입력 후 Enter>");
 scanf("%d", &d[block_number].vic);
 rewind(fpr);
 fseek(fpr, sizeof(worldcup)*block_number, SEEK_SET);
 fwrite(&d[block_number], sizeof(worldcup), 1, fpr);
 fclose(fpr);
}
