#include <stdio.h>
int main(void)
{
	int one, two, result;
	int mid;
	float three;
	one = 'd';
	printf("d의 값을 저장한 one = %d\n", one);
	two = 2.3;
	three = 3;
	mid = one + two;
	printf("one + two = %d \n", mid);
	result = mid + three;
	printf("one+ two + three = %f\n", (mid + three));
	printf("result = %d\n", result);
	return 0;
}
