#include <stdio.h>
#include <math.h>
int main(void)
{
	double x;
	for (x = 1.; x <= 16.; x += 1.)
		printf("log10(%4.1f)=%.f  ln(%4.1f)=%f   log2(%4.1f)=%f\n",
			x, log10(x), x, log(x), x, log(x) / log(2.));
	return 0;
}




