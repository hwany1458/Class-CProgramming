#include <stdio.h>
#include <stdlib.h>
struct buddy 
{
	char name[10];
	char phone[14];
	int month;
 };


int main(void)
{
 struct buddy d;
 FILE *fp;
 long total_block, block_number;

 fp=fopen("student.bin", "rb");
 if(fp==NULL)
  {
   printf("File Open에 오류 발생 !");
   exit(1);
  }
 fseek(fp, 0L, SEEK_END);
 total_block=ftell(fp)/sizeof(buddy);
 printf("전체 block의 숫자는 %d 입니다.\n", total_block);
 while(1) {
   printf("원하는 block의 숫자(1-%d)를 입력하고 Enter >", total_block);
   scanf("%ld", &block_number);
   fflush(stdin);
   if (block_number> total_block)
     break;
   fseek(fp, sizeof(buddy)*(block_number-1), SEEK_SET);
   if (fread(&d, sizeof(buddy), 1, fp) !=1) {
     printf("File read Error !");
     exit(1);
     }
   printf("\n현재 block 위치 : %d\n", block_number);
   printf("이름     전화번호       생월\n");
   printf("%-8s %-14s %2d\n",d.name,d.phone,d.month);
   }
 fclose(fp);
 return 0;
}
