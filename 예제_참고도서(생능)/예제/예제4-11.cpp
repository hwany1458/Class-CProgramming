#include <stdio.h>
void main()
{
  char ch1='A', ch2='1';
  printf("%c  %c\n", ch1, ch2);
  printf("%c  %c\n", 65, 49);
  printf("%d  %d\n", ch1, ch2);
  printf("%d  %c\n", ch1+ch2, ch1+ch2);
}
