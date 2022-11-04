#include <stdio.h>
void main()
{
	int value, num;
	num = 300;
	value = (num, 5, 900); /* value = 300; value=5; value=900; */
	printf("value : %d \n", value);
}