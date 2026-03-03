#include <stdio.h>
struct student
{
  char name[10]; 
  int id;
};
struct pupil
{
  int id_num; 
  char label[10];
};
int main(void)
{
 struct student s1={"kim", 2007};
 struct pupil p1={2006, "Park"};
 int temp;
 printf("s1.id       : %d\n",s1.id);
 printf("p1.id_num: %d\n",p1.id_num);
 temp=s1.id;
 s1.id=p1.id_num;
 p1.id_num=temp;
 printf("s1.id       : %d\n", s1.id);
 printf("p1.id_num: %d\n", p1.id_num);
 return 0;
}
