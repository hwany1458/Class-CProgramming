#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14159265
double rad2deg(double radian);
double deg2rad(double degree);

void main0523()
{
	const double p = 3.14159265;
	double res1, res2;
	res1 = sin(90.0);
	res2 = sin(deg2rad(90.0));
	printf("%f  %f\n", res1, res2);


	printf("\n\n");
	for (double i = 0.0; i <= 360.0; i += 45.0)
	{
		printf("%f도 (%f라디안) sin값은%f\n", i, deg2rad(i), sin(deg2rad(i)));
	}

	printf("\n%f\n", sin(1.570796));
	printf("---------------\n\n");

	// 난수(임의의 수) 뽑는다

	int resInt;
	srand(time(NULL));

	// 로또번호 뽑기 --- 나중에 수정 보완 (중복번호가 나오지 않게)
	for (int i = 1; i < 7; i++)
	{
		resInt = rand();
		printf("%d번째 뽑은 수는 %d\n", i, (resInt%45)+1);
	}

	// 주사위 2개 던지기
	int dice1, dice2;
	dice1 = (rand() % 6) + 1;  // 첫번째 주사위
	dice2 = (rand() % 6) + 1;  // 두번째 주사위
	
	printf("\n1st=%d, 2nd=%d, 합해서 %d칸 전진\n", dice1, dice2, dice1 + dice2);
}


// 사용자 정의 함수 (user defined function)
// 아직 안배웠음
double rad2deg(double radian)
{
	return radian * 180 / PI;
}
double deg2rad(double degree)
{
	return degree * PI / 180;
}