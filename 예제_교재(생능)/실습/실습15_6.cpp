#include <stdio.h>
struct person
{
   char name[21];
   char phone[14];
   char email[21];
   char address[41];
   int bell;
};
void display_st(struct person *d, int n);
int main(void)
{
  person d[3]={{"김명환","011-123-4567","hhkim@naver.com", 
                   "수원시 장안구 정자동", 3},
                   {"이진영","010-120-5638","jylee@daum.net", 
                   "서울시 동대문구 회기동", 4},
                   {"박동찬","010-0120-2386","dcpark@seoul.net", 
                   "서울시 종로구 인사동", 4}};
 display_st(d, 3);
 return 0;
}


void display_st(struct person *d, int n)
{
 int i;
 for(i=0;i<n;i++)
 {
  printf("name    : %s\n", d[i].name);
  printf("phone   : %s\n", d[i].phone);
  printf("email   : %s\n", d[i].email);
  printf("address : %s\n", d[i].address);
  printf("bell     : %d\n", d[i].bell);
 }
}

