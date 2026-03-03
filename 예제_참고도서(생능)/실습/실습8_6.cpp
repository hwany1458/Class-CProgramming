#include <stdio.h>
void main()
{
    for (double f = 100; f >= 80; f -= 2.5)
        printf("È­¾¾¿Âµµ %.2f´Â ¼·¾¾¿Âµµ·Î %.2f\n", f, 5 * (f - 32) / 9);
    printf("\n");
    for (double c = 15; c <= 35; c += 2.5)
        printf("¼·¾¾¿Âµµ %.2f´Â È­¾¾¿Âµµ·Î %.2f\n", c, 9 * c / 5 + 32);
}

