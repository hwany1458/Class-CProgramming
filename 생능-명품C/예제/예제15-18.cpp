#include <stdio.h>
struct person 
 {
   char *name;
   int age;
   struct phone 
  {
   char *home_num;
   char *mobile_num;
   } number;
};
int main(void)
{
 struct person man, *pt;
 pt=&man;
 pt->name="jaeho";
 pt->age=18;
 pt->number.home_num="02-345-0084";
 pt->number.mobile_num="019-945-0001";
 printf("name   : %s\n", pt->name);
 printf("age    : %d\n", pt->age);
 printf("home   : %s\n", pt->number.home_num);
 printf("mobile : %s\n", pt->number.mobile_num);
 return 0;
} 
