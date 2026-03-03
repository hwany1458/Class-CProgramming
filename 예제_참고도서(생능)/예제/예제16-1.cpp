#include <stdio.h>
#include <string.h>
union uchr  {
	char chr1;
	char chr2[3];
 };
int main(void)
{
 union uchr data;
 strcpy(data.chr2, "AB");
 printf("data.chr1 = %c\n", data.chr1);
 printf("data.chr2 = %s\n", data.chr2);
 data.chr1='C';
 printf("data.chr1 = %c\n", data.chr1);
 printf("data.chr2 = %s\n", data.chr2);
 return 0;
}
