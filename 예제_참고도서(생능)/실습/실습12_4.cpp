#include <stdio.h>
#include <math.h>
int main(void)
{
    double x;
    for (x = -2.; x <= 2.; x += 0.1)
        printf("%.1f exp(x)=%f, exp(x/2)=%f\n", x, exp(x), exp(-x / 2.));
    return 0;
}

