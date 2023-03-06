#include <stdio.h>
void main()
{
	int age;
	printf("나이를 입력하고 Enter>");
	scanf("%d", &age);
	if (age >= 19)
		printf("성인입니다.\n");
	else
		printf("미성년입니다.\n");
}

