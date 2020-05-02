# include <stdio.h>
void main()
{
	int i, j;

	printf("Enter first number : ");
	scanf_s("%d", &i);
	printf("Enter second number : ");
	scanf_s("%d", &j);

	printf("i < j : %d \n", i < j);
	printf("i <= j : %d \n", i <= j);
	printf("i > j : %d \n", i > j);
	printf("i >= j : %d \n", i >= j);
	printf("i == j : %d \n", i == j);
	printf("i != j : %d \n", i != j);
}