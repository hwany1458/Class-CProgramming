#include <stdio.h>
#include <math.h>
double round_num(double x);
int main(void)
{
    double x;
    printf("임의의 실수를 입력하고 Enter>");
    scanf("%lf", &x);
    printf("반올림 값 = %.f\n", round_num(x));
    return 0;
}

double round_num(double x)
{
    if (x < 0)
        return floor(x);
    else
        return ceil(x);
}

