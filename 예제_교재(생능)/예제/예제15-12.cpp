#include <stdio.h>
struct user
  {
   char name[20];
   char phone[14];
   int quick;
  };
void display_st(struct user *s, int n);
int main(void)
{
 user d[2]={{"김명환","011-123-4567",1},
              {"이진영","010-120-5638",5}};
 display_st(d, 2);
 return 0;
}
void display_st(struct user *s, int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("name :%s\n", s[i].name);
  printf("phone:%s\n", (s+i)->phone);
  printf("quick:%d\n", s[i].quick);
  printf("\n");
 }
}
