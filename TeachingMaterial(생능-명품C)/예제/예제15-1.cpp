#include <stdio.h>
struct user
  {
    char name[20];
    char phone[14];
    int quick;
  };
int main(void)
{
  struct user d={"±Ë∏Ì»Ø",
		    "011-123-4567",
		    1};
  printf("name  : %s\n", d.name);
  printf("phone : %s\n", d.phone);
  printf("quick : %d\n", d.quick);
  return 0;
}
