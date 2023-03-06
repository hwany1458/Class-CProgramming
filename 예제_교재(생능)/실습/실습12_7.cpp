#include <stdio.h>
#include <math.h>
double deg2rad(double degree);
#define PI  3.141592
int main(void)
{
	printf("sin=%f\n", sin(deg2rad(210.)));
	printf("cos=%f\n", cos(deg2rad(120.)));
	printf("tan=%f\n", tan(deg2rad(25.)));
	return 0;
}
double deg2rad(double degree)
{
	return degree * PI / 180;
}


