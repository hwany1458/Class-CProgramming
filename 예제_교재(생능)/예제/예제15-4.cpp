#include <stdio.h>
struct user
{
	char name[20];
	char phone[14];
	int quick;
};
int main(void)
{
	struct user d1, d2 = { "±Ë∏Ì»Ø",
 	   		"011-123-4567",
			  1 };
	d1 = d2;
	printf("name  : %s\n", d1.name);
	printf("phone : %s\n", d1.phone);
	printf("quick : %d\n", d1.quick);
	return 0;
}
