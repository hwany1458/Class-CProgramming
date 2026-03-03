#include <stdio.h>
double fact(double n);
int main(void)
{
    double n;
    printf("정수 입력후 Enter>");
    scanf("%lf", &n);
    printf("1부터 %.lf까지 곱 : %.lf\n", n, fact(n));
    return 0;
}

double fact(double n)
{
    if (n == 1.)
        return 1.;
    return n * fact(n - 1);
}