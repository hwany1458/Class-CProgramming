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
 struct buddy d[5]={{"김성윤", "010-0101-4312", 4},
                           {"이진철", "011-501-1111", 5},
                           {"박상철", "010-0001-0011", 2},
			   {"김기수", "011-001-1100", 2},
			{"최창선", "010-9000-1209", 11}};
 FILE *fp;
 printf("이름     전화번호       생월\n");
 for(int i=0; i<5; i++)
   printf("%-8s %-14s %2d\n",d[i].name,d[i].phone,d[i].month);

 fp=fopen("student.bin", "wb");
 if(fp==NULL)
  {
   printf("File Open에 오류 발생 !");
   exit(1);
  }
 if(fwrite(d, sizeof(buddy), 5, fp) !=5)
  {
   printf("File read Error !");
   exit(1);
  }
 fclose(fp);
 return 0;
}

