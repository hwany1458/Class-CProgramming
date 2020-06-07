#include <stdio.h>
void main()
{
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);
	if (num < 0) printf("Number is negative\n");
	else printf("Number is positive\n");
}