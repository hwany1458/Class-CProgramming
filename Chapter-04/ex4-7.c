#include<stdio.h>
#define SECPERMIN 60
void main()
{
	int sec, min, left;
	printf("Convert second to minutes and second!\n");
	printf("Enter to number of the seconds ==>");
	scanf_s("%d", &sec);
	min = sec / SECPERMIN; /* 초를 60으로 나눈 결과 몫은 분이된다 */
	left = sec % SECPERMIN; /* 나머지는 초가 된다 */
	printf("\n%d seconds is %d minutes, %d seconds. \n", sec, min, left);
}