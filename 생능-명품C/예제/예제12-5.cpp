#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
 div_t ix;
 ldiv_t lx;
 double num=367.568, frct, intg;
 double x1=7.0, y1=2.0;
 ix=div(10,4);
 printf("10/4의 결과 몫: %d, 나머지: %d\n", ix.quot, ix.rem);
 lx=ldiv(100L, 30L);
 printf("100/30의 결과 몫: %ld, 나머지: %ld\n", lx.quot, lx.rem);
 frct=modf(num, &intg);
 printf("%lf의 정수: %lf, 실수: %lf \n", num, intg, frct);
 printf("%lf/%lf의 나머지: %lf\n", x1, y1, fmod(x1, y1));
 return 0;
}
