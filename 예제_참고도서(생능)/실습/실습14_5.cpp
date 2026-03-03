#include <stdio.h>
int main(void)
{
	char* en[] = { "Kim Changsu", "Park Donghee",
		"Seo Seungman", "Choi Mina" };
	char* hn[] = { "±èÃ¢¼ö", "¹Úµ¿Èñ", "¼­½Â¸¸", "ÃÖ¹Ì³ª" };
	for (int i = 0; i < 4; i++)
		printf("%s   %s\n", en[i], hn[i]);
	return 0;
}

