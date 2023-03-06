#include <stdio.h>
void main()
{
 int age, height;
 char blood;
 printf("나이를 입력하고 Enter>");
 scanf("%d", &age);
 printf("키(cm)를 입력하고 Enter>");
 scanf("%d", &height);
 getchar();
 printf("혈액형(A,B,O)를 입력하고 Enter>");
 scanf("%c", &blood);
 printf("나이 : %d\n",age);
 printf("키(cm) : %d\n",height);
 printf("혈액형 : %c\n",blood);
}
