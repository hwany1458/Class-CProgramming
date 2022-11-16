#include <stdio.h>

void main()
{
	int i = 100, j = 200;

	printf("i : %d , j : %d \n", ++i, j++);
	printf("i : %d , j : %d \n", i, j);
	printf("i : %d , j : %d \n", --i, j--);
	printf("i : %d , j : %d \n", i, j);

	i = j++;
	printf("i : %d , j : %d \n", i, j);
}