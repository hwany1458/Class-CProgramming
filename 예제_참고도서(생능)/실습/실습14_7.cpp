#include <stdio.h>
#include <stdlib.h>

int 플러스(int x, int y);
int main(void)
{
 int (*pt)(int a, int b);
 int a=3, b=5;
 pt=플러스;
 printf("result = %d \n", pt(a, b));
 printf("result = %d \n", 플러스(a, b));
 return 0;
}
int 플러스(int x, int y)
{
 return x+y;
}
