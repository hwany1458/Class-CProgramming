#include <stdio.h>
void call_2(int n);
int main(void)
{
   call_2(5);
   return 0;
}

void call_2(int n)
{
   if (n==0)
   	return;
   else
   {
	call_2(n-1);
	printf("%d\n", n);
   }
}
