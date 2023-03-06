#include <stdio.h> 
#include <math.h>
#define PI 3.14159265	
double rad2deg(double radian);
double deg2rad(double degree);
int main(void)
{
	double degree = 90;
	double radian = PI / 2;
	printf("각도%f의 라디안=%f\n", degree, deg2rad(degree));
	printf("라디안 %f의 각도=%f\n", radian, rad2deg(radian));
	return 0;
}
double rad2deg(double radian)
{
	return radian * 180 / PI;
}
double deg2rad(double degree)
{
	return degree * PI / 180;
}
