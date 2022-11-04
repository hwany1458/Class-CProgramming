#include <stdio.h>
void main()
{
 char ch1, ch2;
 printf("문자를 입력하고 Enter>");
 scanf("%c", &ch1);
 fflush(stdin);
 printf("문자를 입력하고 Enter>");
 scanf("%c", &ch2);
 printf("입력된 문자 %c, %c\n",ch1, ch2);
}
