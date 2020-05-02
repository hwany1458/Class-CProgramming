# include <stdio.h>
void main()
{
	int i, j;

	printf("Enter first number : ");
	scanf_s("%d", &i);
	printf("Enter second number : ");
	scanf_s("%d", &j);

	printf("i>=100 && j>=100 : %d \n", i >= 100 && j >= 100);
	printf("i>=100 || j>=100 : %d \n", i >= 100 || j >= 100);
	
	i = 0;
	printf("i && j: %d \n", i && j);
	printf("i || j: %d \n", i || j);
	printf("!i : %d, !j : %d \n", !i, !j);
}