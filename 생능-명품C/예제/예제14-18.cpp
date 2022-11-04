#include <stdio.h>
#include <string.h>
int main(void)
{
  char s[15]="star";
  char t[6]="craft";
  strcat(s, t);
  printf("strcat :%s\n", s);
  strncat(s, t, 3);
  printf("strncat:%s\n", s);
  return 0;
}
