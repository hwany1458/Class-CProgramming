#include <stdio.h>
int add(int a);
int main(void)

{ 
 int a=10;
 printf("a=%d\n", a);
 printf("%d\n", add(a));
 printf("a=%d\n", a);
 return 0;
}


int add(int a)

{
 a=a+5;
 return a;
}

