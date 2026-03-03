#include <stdio.h>
#include <string.h>
int main(void)
{
	char s[15];
	char *str1 = "abcdefghi";
	char *str2 = "ABCDEFGHI";
	strcpy(s, str1);
	printf("strcpy : %s\n", s);
	strncpy(s, str2, 4);
	printf("strncpy : %s\n", s);
	printf("length of s : %d\n", strlen(s));
	return 0;
}
