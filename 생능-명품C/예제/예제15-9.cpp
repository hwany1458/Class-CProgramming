#include <stdio.h>
struct user
  {
   char name[20];
   char phone[14];
   int quick;
  };
int main(void)
{
 user d[2]={{"김명환", "011-123-4567",1},
              {"이진영", "010-120-5638",5}};
 user *pt;
 pt=d;
 printf("pt의 주소 : %u\n", &pt);
 printf("pt의 값 : %u\n", pt);
 printf("d[1]의 주소 : %u\n", &d[1]);
 return 0;
}
