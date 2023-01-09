#include <stdio.h>
struct phone 
{
 char *home_num;
 char *mobile_num;
};
struct person 
{
   char *name;
   int age;
   struct phone number;
};
int main(void)
{
 struct person man={"jaeho", 18, {"02-345-0084", "019-945-0001"}};
 printf("name   : %s\n", man.name);
 printf("age    : %d\n", man.age);
 printf("home   : %s\n", man.number.home_num);
 printf("mobile : %s\n", man.number.mobile_num);
 return 0;
} 
