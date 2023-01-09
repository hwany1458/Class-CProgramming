#include <stdio.h>
void call_1(int n);
int main(void)
{
   call_1(5);
   return 0;
}

void call_1(int n)
{
   if (n==0)
	return;
   else
   {
	printf("%d\n", n);
	call_1(n-1);
   }
}
