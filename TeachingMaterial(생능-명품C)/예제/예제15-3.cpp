#include <stdio.h>
struct user
  {
   char name[20];
   char phone[14];
   int quick;
  };
int main(void)
{
  user d;
  printf("name 입력 :");
  scanf("%s", d.name);
  printf("phone 입력 :");
  scanf("%s", d.phone);
  printf("단축번호 입력 :");
  scanf("%d", &d.quick);
  printf("name  : %s\n", d.name);
  printf("phone : %s\n", d.phone);
  printf("quick : %d\n", d.quick);
  return 0;
}
