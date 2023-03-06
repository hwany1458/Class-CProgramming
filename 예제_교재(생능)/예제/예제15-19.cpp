#include <stdio.h>
struct node
{
	char data;
	struct node* link;
};
int main(void)
{
	struct node* head, a1, a2, a3;
	a1.data = 'A';
	a2.data = 'K';
	a3.data = 'D';
	head = &a1;
	a1.link = &a2;
	a2.link = &a3;
	a3.link = NULL;
	printf("Linked List \n\n");
	printf("head의 주소 : %u\n", &head);
	printf("head 포인터 : %u\n", head);
	while (head != NULL)
	{
		printf("데이터: %c, 주소: %u\n", head->data, head->link);
		head = head->link;
	}
	return 0;
}
