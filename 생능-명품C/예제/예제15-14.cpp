#include <stdio.h>
#include "user.h"
int main(void)
{
 user d[2]={{"김명환","011-123-4567",1},
              {"이진영","010-120-5638",5}};
 user *pt;
 int i;
 pt=d;
 for(i=0;i<2;i++)
 {
  printf("name :%s\n", (pt+i)->name);
  printf("phone:%s\n", (pt+i)->phone);
  printf("quick:%d\n", (pt+i)->quick);
  printf("\n");
 }
 return 0;
}
