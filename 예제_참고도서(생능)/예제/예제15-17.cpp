#include <stdio.h>
struct person
{
	char name[10];
	int age;
	struct phone
	{
		char home_num[14];
		char mobile_num[14];
	} number;
};
int main(void)
{
	struct person man[3];
	printf("이름을 입력하고 Enter :");
	scanf("%s", man[0].name);
	printf("나이를 입력하고 Enter :");
	scanf("%d", &man[0].age);
	printf("집전화를 입력하고 Enter :");
	scanf("%s", man[0].number.home_num);
	printf("휴대폰번호를 입력하고 Enter :");
	scanf("%s", man[0].number.mobile_num);
	printf("\n");
	printf("name   : %s\n", man[0].name);
	printf("age    : %d\n", man[0].age);
	printf("home   : %s\n", man[0].number.home_num);
	printf("mobile : %s\n", man[0].number.mobile_num);
	return 0;
}
