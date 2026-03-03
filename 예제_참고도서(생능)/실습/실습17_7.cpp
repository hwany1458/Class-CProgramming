#include <stdio.h>
#include <stdlib.h>
struct buddy
{
	char name[10];
	char phone[14];
	int month;
};

void display(struct buddy* d);

int main(void)
{
	struct buddy d[5];
	FILE* fp;

	fp = fopen("student.bin", "rb");
	if (fp == NULL)
	{
		printf("File Open에 오류 발생 !");
		exit(1);
	}
	if (fread(d, sizeof(buddy), 5, fp) != 5)
	{
		printf("File read Error !");
		exit(1);
	}
	fclose(fp);
	display(d);
	return 0;
}

void display(struct buddy* d)
{
	printf("이름     전화번호       생월\n");
	for (int i = 0; i < 5; i++)
		printf("%-8s %-14s %2d\n", d[i].name, d[i].phone, d[i].month);
}


