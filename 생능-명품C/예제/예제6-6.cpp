#include <stdio.h>
void main()
{ 
  int a=10, b=5;
  a=a+b*a-b/a;
  b=(-a+b)%a+b-a;
  printf(" a= %d, b = %d \n", a, b);
}
