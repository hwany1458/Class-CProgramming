#include <stdio.h>
struct user
  {
   char name[20];
   char phone[14];
   int quick;
  };
int main(void)
{
 printf("user size : %d\n", sizeof(user));
 return 0;
}
