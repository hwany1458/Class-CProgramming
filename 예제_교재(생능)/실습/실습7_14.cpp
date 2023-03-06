#include <stdio.h>
void main()
{
 int n;
 double x, y, z;
 printf("1:삼각형, 2:사각형, 3:사다리꼴을 계산\n");
 printf("번호를 입력하고 Enter>");
 scanf("%d", &n);
 switch(n)
  {
    case 1 :
	printf("삼각형의 넓이 계산\n");
	printf("밑변의 길이를 입력하고 Enter>");
	scanf("%lf",&x);
	printf("높이의 길이를 입력하고 Enter>");
	scanf("%lf",&y);
	printf("삼각형의 넓이는 %f\n", x*y/2);
	break;
    case 2 : 
	printf("사각형의 넓이 계산\n");
	printf("밑변의 길이를 입력하고 Enter>");
	scanf("%lf",&x);
	printf("높이의 길이를 입력하고 Enter>");
	scanf("%lf",&y);
	printf("사각형의 넓이는 %f\n", x*y);
	break;
    case 3 : 
	printf("사다리꼴의 넓이 계산\n");
	printf("밑변의 길이를 입력하고 Enter>");
	scanf("%lf",&x);
	printf("높이의 길이를 입력하고 Enter>");
	scanf("%lf",&y);
	printf("윗변의 길이를 입력하고 Enter>");
	scanf("%lf",&z);
	printf("사다리꼴의 넓이는 %f\n", (z+x)*y/2);
    default : printf("계산할 수 없습니다.\n");
   }     
}
