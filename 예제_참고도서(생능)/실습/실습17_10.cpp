#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct buddy 
{
	char name[10];
	char phone[14];
	int month;
 };
char *file="student.bin";
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
 struct buddy d[10];
 fpr=fopen(file, "rb+");
 if(fpr==NULL) 
  {
    printf("File Open에 오류 발생 !");
    exit(1);
 }
 fseek(fpr, 0L, SEEK_END);
 total_block=ftell(fpr)/sizeof(buddy);
 rewind(fpr);
 fread(d, sizeof(buddy), total_block, fpr);
 printf("\n전체 data \n\n");
 printf("block 이름     전화번호       생월\n");
 for(i=0;i<total_block;i++)
   printf("%3d %-8s %-14s %2d\n",i, d[i].name,d[i].phone,d[i].month);
 printf("\n생월을 수정하려는 block의 번호를 입력>");
 scanf("%d", &block_number);
 fflush(stdin);
 printf("이름 : %s\n", d[block_number].name);
 printf("수정할 생월 입력 후 Enter>");
 scanf("%d", &d[block_number].month);
 rewind(fpr);
 fseek(fpr, sizeof(buddy)*block_number, SEEK_SET);
 fwrite(&d[block_number], sizeof(buddy), 1, fpr);
 fclose(fpr);
}

