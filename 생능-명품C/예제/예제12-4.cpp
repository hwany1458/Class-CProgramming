#include <stdio.h>
#include <math.h>
int main(void)
{
 double num1=2.0;
 double num2=4.0;
 double num3=8.0;
 double num4=9.0;
 double num5=16.0;
 double mantissa;
 int expt;
 printf("지수함수 e^%.1f = %f\n", num1, exp(num1));
 printf("%.1f*2^%.1f = %f\n", num2, num1, ldexp(num2, 2));
 mantissa=frexp(num3, &expt);
 printf("%.1f = %.1f*2^%d \n", num3, mantissa, expt);
 printf("log(%.1f)   = %f\n", num4, log(num4));
 printf("log10(%.1f) = %f\n", num4, log10(num4));
 printf("%.1f^%.1f = %f\n", num1, num2, pow(num1, num2));
 printf("square root(%.1f) = %f\n", num5, sqrt(num5));
 return 0;
}
