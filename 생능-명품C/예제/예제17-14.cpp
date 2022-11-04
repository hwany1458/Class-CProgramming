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
void delete_data(void);
int main(void)
{
  delete_data();
  return 0;
}
void delete_data(void)
{
  long i, total_block, check=0;
  char name[10];
  FILE *fpr;
  worldcup d[10];
  fpr=fopen(file, "rb");
  if(fpr==NULL) {
	printf("File Open에 오류 발생 !");
	 exit(1);
  }
  fseek(fpr, 0L, SEEK_END);
  total_block=ftell(fpr)/sizeof(worldcup);
  fseek(fpr, 0L, SEEK_SET);
  fread(d, sizeof(worldcup), total_block, fpr);
  fclose(fpr);
  printf("파일에서 삭제할 국가명을 입력하고 Enter>");
  gets(name);
  for(i=0;i<total_block;i++)
	if (strcmp(name, d[i].na)==0)
	 { check=1;
           d[i]=d[total_block-1];
	   total_block--;
	 }
  if (check==0) printf("일치하는 데이터 없음\n");
  printf("\n삭제 처리 후 전체 data\n\n");
  printf("국가이름 승 무 패\n");
  for(i=0;i<total_block;i++)
   printf("%-8s %2d %2d %2d\n",d[i].na,d[i].vic,d[i].tie, d[i].def);
  fpr=fopen(file, "wb");
  fseek(fpr, 0L, SEEK_SET);
  fwrite(d, sizeof(worldcup), total_block, fpr);
  fclose(fpr);
}
