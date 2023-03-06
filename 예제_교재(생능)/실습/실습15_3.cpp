#include <stdio.h>
#include <string.h>
struct person
{
   char name[21];
   char phone[14];
   char email[21];
   char address[41];
   int bell;
};
int main(void)
{
  person d; 
  strcpy(d.name, "김명환");
  strcpy(d.phone, "011-123-4567");
  strcpy(d.email, "hhkim@naver.com");
  strcpy(d.address, "수원시 장안구 정자동");
  d.bell=3;
  printf("name    : %s\n", d.name);
  printf("phone   : %s\n", d.phone);
  printf("email   : %s\n", d.email);
  printf("address : %s\n", d.address);
  printf("bell     : %d\n", d.bell);
  return 0;
}

