#include <stdio.h>
union data  
{
	char ch;
	int n;
 };
int main(void)
{
  union data v;
  printf("%d\n", sizeof(data));
  v.ch='A';
  printf("%d\n", sizeof(v.ch));
  v.n=25;
  printf("%d\n", sizeof(v.n));
  return 0;
}
