#include <stdio.h>
#include <math.h>
int main(void)
{
 double x=123.54, y=-123.54;
 printf("ceil(%f) =%f\n", x, ceil(x));
 printf("floor(%f)=%f\n", x, floor(x));
 printf("ceil(%f) =%f\n", y, ceil(y));
 printf("floor(%f)=%f\n", y, floor(y));
 return 0;
}
