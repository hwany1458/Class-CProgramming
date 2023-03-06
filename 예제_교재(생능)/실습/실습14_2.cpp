#include <stdio.h>
int main(void)
{
 int a=8, b=3, temp; 
 int *pa, *pb;
 pa=&a;
 pb=&b;
 temp=*pa;
 *pa=*pb;
 *pb=temp;
 printf("a=%d b=%d\n", a, b);
 return 0;
}

