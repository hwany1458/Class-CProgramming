#include <stdio.h>
int main(void)
{
  char na[4][17]={"Korea",  "Brazil", 
                     "Germany", 
                     "Papua New Guinea"}; 
  char *ct[]={"Korea", "Brazil", 
                "Germany", 
                "Papua New Guinea"};
  printf("na[2] : %s \n", na[2]);
  printf("na[2][3] : %c \n", na[2][3]);
  printf("ct[2] : %s \n", ct[2]);
  printf("ct[2][3] : %c \n", ct[2][3]);
  return 0;
}
