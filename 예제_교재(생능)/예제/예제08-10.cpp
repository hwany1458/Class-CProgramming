#include <stdio.h>
void main()
{
 int i=1;
 while(i!=0)
 {
  printf("0을 입력하면 반복이 중단됨\n");
  printf("숫자 입력 후 Enter>");
  scanf("%d", &i);
 }
}
