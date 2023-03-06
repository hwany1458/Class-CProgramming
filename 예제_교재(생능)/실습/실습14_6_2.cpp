#include <stdio.h>
void array_sum(int *c, int *d);
int main(void)
{
   int a[]={15, 25}, b[]={10, 20};
   array_sum(a, b);
   for(int i=0;i<2;i++)
	printf("%d\n", a[i]);
   return 0;
}

void array_sum(int *c, int *d)
{
   int i;
   for(i=0;i<2;i++)
  	c[i]=c[i]+d[i];
}
