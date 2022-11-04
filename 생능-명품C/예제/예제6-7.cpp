#include <stdio.h>
void main()
{ 
  int a=4, b=8, c;
  c=(a>b) ? a-b : b-a;
  printf("c=%d\n", c);
}
