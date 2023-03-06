#include <stdio.h>
void main()
{ 
  double a=5.3, b=7.6, c;
  c=a/(a+b);
  printf("%7.2f\n", c);
  c=(a-b)/(a+b);
  printf("%7.2f\n", c);
  c=2*a*a-4*a*b;
  printf("%7.2f\n", c);
}
