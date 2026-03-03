#include <stdio.h>
struct person
{
	char name[21];
	char phone[14];
	char email[21];
	char address[41];
	int bell;
};
int main(void)
{
	person d;
	printf("name 입력 :");
	scanf("%s", d.name);
	printf("phone 입력 :");
	scanf("%s", d.phone);
	printf("email 입력 :");
	scanf("%s", d.email);
	printf("address 입력 :");
	scanf("%s", d.address);
	printf("벨소리 입력 :");
	scanf("%d", &d.bell);
	printf("name    : %s\n", d.name);
	printf("phone   : %s\n", d.phone);
	printf("email   : %s\n", d.email);
	printf("address : %s\n", d.address);
	printf("bell     : %d\n", d.bell);
	return 0;
}

