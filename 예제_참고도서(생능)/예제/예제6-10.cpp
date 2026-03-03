#include <stdio.h>
void main()
{ 
  double x=3.14159;
  int i=10;
  i=(int) (i+x);
  printf("i=%d\n", i);
  printf("int x=%d\n", (int) x);
  printf("double x=%f\n", x);    
}
