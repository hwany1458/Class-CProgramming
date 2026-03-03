#include <stdio.h>
#include <math.h>
#define PI  3.141592
int main(void)
{
    int n;
    double r, s, c;
    for (n = 0; n <= 90; n += 10)
    {
        r = (double)n * PI / 180;
        s = sin(r);
        c = cos(r);
        printf("sin(%2d)=%9.6f, cos(%2d)=%9.6f\n", n, s, n, c);
    }
    return 0;
}
