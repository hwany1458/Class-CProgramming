#include <stdio.h>
#include <string.h>

void my_strcpy(char* s1, const char* s2);
int main(void)
{
	char s[15];
	char* str1 = "abcdefghi";
	char* str2 = "ABCDEFGHI";
	my_strcpy(s, str1);
	printf("strcpy : %s\n", s);
	printf("length of s : %d\n", strlen(s));
	return 0;
}

void my_strcpy(char* s1, const char* s2)
{
	int i = 0, j = 0;
	while (s2[i] != '\0')
	{
		s1[j++] = s2[i];
		i++;
	}
	s1[j] = '\0';
}

