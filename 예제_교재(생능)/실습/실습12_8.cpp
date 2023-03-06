#include <stdio.h>
#include <math.h>
double deg2rad(double degree);
#define PI  3.141592
int main(void)
{
	double deg = 120, a = 2., b = 2 * sqrt(3), s;
	s = (a * b * sin(deg2rad(deg))) / 2;
	printf("s=%f\n", s);
	return 0;
}
double deg2rad(double degree)
{
	return degree * PI / 180.;
}

