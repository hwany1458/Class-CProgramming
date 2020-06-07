#include <stdio.h>
void main()
{
	int n = 0, hap = 0;
	
	for (n = 1; n <= 100; n++)
		hap += n;
	printf("1+2+3+....+100 = %d(for statement)\n", hap);

	n = 1, hap = 0;
	while (n <= 100) {
		hap += n;
		n++;
	}
	printf("1+2+3+....+100 = %d(while statement)\n", hap);
	
	n = 1, hap = 0;
	do {
		hap += n;
		n++;
	} while (n <= 100);
	printf("1+2+3+....+100 = %d(do-while statement)\n", hap);
}