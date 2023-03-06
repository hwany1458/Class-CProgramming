#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct buddy
{
	char name[10];
	char phone[14];
	int month;
};
void search_name(void);
int main(void)
{
	search_name();
	return 0;
}


void search_name(void)
{
	long i, total_block, check = 0;
	char name[10];

	FILE* fpr;
	struct buddy d[10];
	fpr = fopen("student.bin", "rb");
	if (fpr == NULL) {
		printf("File Open에 오류 발생 !");
		exit(1);
	}
	fseek(fpr, 0L, SEEK_END);
	total_block = ftell(fpr) / sizeof(buddy);
	fseek(fpr, 0L, SEEK_SET);
	fread(d, sizeof(buddy), total_block, fpr);
	fclose(fpr);
	printf("검색할 이름을 입력하고 Enter>");
	gets(name);
	for (i = 0; i < total_block; i++)
		if (strcmp(name, d[i].name) == 0)
		{
			check = 1;
			printf("이름     전화번호       생월\n");
			printf("%-8s %-14s %2d\n", d[i].name, d[i].phone, d[i].month);
		}
	if (check == 0) printf("일치하는 데이터 없음\n");
}

