#include <stdio.h>
#include <stdlib.h>
typedef struct {
	char na[10];
	int vic;
	int tie;
	int def;
} worldcup;
void display(worldcup* d);
int main(void)
{
	FILE* fp;
	worldcup d[4];
	fp = fopen("d-group.bin", "rb");
	if (fp == NULL)
	{
		printf("File Open에 오류 발생 !");
		exit(1);
	}
	if (fread(d, sizeof(worldcup), 4, fp) != 4)
	{
		printf("File read Error !");
		exit(1);
	}
	display(d);
	fclose(fp);
	return 0;
}

void display(worldcup* d)
{
	int i;
	printf("국가이름 승 무 패\n");
	for (i = 0; i < 4; i++)
		printf("%-8s %2d %2d %2d\n", d[i].na, d[i].vic, d[i].tie, d[i].def);
}

