#include <stdio.h>
void main()
{
 char operand;
 int a=8, b=5;
 printf("연산자(+-*/%)를 입력하고 Enter>");
 scanf("%c", &operand);
 switch(operand)
  {
    case '+' : printf("a+b=%d", a+b);
	  break;
    case '-' : printf("a-b=%d", a-b);
	  break;
    case '/' : printf("a/b=%d", a/b);
	  break;
    case '*' : printf("a*b=%d", a*b);
	  break;
    case '%' : printf("a%%b=%d", a%b);
	  break;
    default : printf("계산할 수 없습니다.");
   }     
}
