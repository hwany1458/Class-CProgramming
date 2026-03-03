#include <stdio.h>
void main()
{
    int a;
    double x;
    printf("임의의 숫자를 입력하고 Enter>");
    scanf("%lf", &x);
    a = x;
    if (x - a > 0)
        printf("소수이하 : %f\n", x - (int)x);
    else if (a % 2)
        printf("정수이고 홀수입니다.\n");
    else
        printf("정수이고 짝수입니다.\n");
}
