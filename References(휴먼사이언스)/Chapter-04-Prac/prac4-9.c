#include<stdio.h>
void main()
{
	int num;
	printf("입력받은 수가 짝수인지 홀수인지 판별하는 프로그램! \n");
	printf("Input a number ==>");
	scanf_s("%d", &num); /* 사용자에게 정수를 입력 받음 */

	printf("입력한 수는 : %s 입니다. \n", [   ] ? "홀수" : "짝수");
	/*조건연산자의 결과가 1이면 "홀수"출력하고, 0이면 "짝수"라고 출력함 */
}