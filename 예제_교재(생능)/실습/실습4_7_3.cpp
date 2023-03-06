#include <stdio.h>
void main()
{
   int a=3, b=5, c, d, e;
   c=a+b;
   d=a-b;
   e=c;
   c=b;
   b=e;
   printf("%d\n", c);
   printf("%d\n", d);
}
