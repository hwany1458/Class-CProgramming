#include <stdio.h>
int main(void)
{  
	//char number;
	int number;
	char name[50];
	char praise[35] = "It's nice to meet you.";
	printf("Enter the number?\n");
	//scanf("%d", &number);
	scanf_s("%d", &number); 
	printf("What's your name?\n");
	//scanf(" %s", name);
	scanf_s(" %s", name, sizeof(name));
	printf(" %d Hello, %s. %s \n", number, name, praise);
	return 0;
}