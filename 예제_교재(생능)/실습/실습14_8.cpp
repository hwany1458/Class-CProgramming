#include <stdio.h>
#include <string.h>
void my_strcat(char *s1, char *s2);
int main(void)
{
  char s[15]="star";
  char t[6]="craft";
  my_strcat(s, t);
  printf("strcat :%s\n", s);
  strncat(s, t, 3);
  printf("strncat:%s\n", s);
  return 0;
}

void my_strcat(char *s1, char *s2)
{
   int i=0, j=0;
   while(s1[i]!='\0')
	   i++;
   while(s2[j]!='\0')
   {
      s1[i++]=s2[j];          
	  j++;
   }
   s1[i+1]='\0';
}

