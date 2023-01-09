#include <stdio.h>
int call_1(int n);
int main(void)
{
   printf("%d\n", call_1(123));
   return 0;
}
int call_1(int n)
{
   if (n==0)
	return 0;
   return call_1(n/10)+1;
}
