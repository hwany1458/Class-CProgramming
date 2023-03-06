#include <stdio.h>
void print_array(char a[]);
int main(void)
{
	char str[10];
	printf("문자열을 입력:");
	scanf("%s", str);
	print_array(str);
	return 0;
}
void print_array(char a[])
{
	printf("입력된 문자열:");
	printf("%s\n", a);
}
