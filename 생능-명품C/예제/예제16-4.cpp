#include <stdio.h>
struct patient2 {
  int age;
  unsigned sex : 1;
  unsigned drinking : 1;
  unsigned smoking : 1;
  unsigned pressure : 2;
};

int main(void)
{
 struct patient2 p1={35,0,1,1,3};
 printf("age :%d\n", p1.age);
 printf("sex :%d\n", p1.sex);
 printf("drinking :%d\n", p1.drinking);
 printf("smoking :%d\n", p1.smoking);
 printf("blood pressure :%d\n", p1.pressure);
 return 0;
}
