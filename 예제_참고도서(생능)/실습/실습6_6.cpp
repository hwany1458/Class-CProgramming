#include <stdio.h>
void main()
{
   double f, c; 
   printf("È­¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ°í Enter>");
   scanf("%lf", &f);
   printf("¼·¾¾¿Âµµ¸¦ ÀÔ·ÂÇÏ°í Enter>");
   scanf("%lf", &c);
   printf("È­¾¾¿Âµµ %.2f´Â ¼·¾¾¿Âµµ·Î %.2f\n", f, 5*(f-32)/9);
   printf("¼·¾¾¿Âµµ %.2f´Â È­¾¾¿Âµµ·Î %.2f\n", c, 9*c/5+32);
}

