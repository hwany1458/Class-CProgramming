#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee
{
 char name[20];
 int year;
 int pay;
};

int main(void)
{
 struct employee *p1;
 p1 = (struct employee *) malloc(sizeof(struct employee));
 strcpy(p1->name,"James Bond");
 p1->year = 1970;
 p1->pay = 5500;
 printf("name: %s\n",p1->name);
 printf("year: %d\n",p1->year);
 printf("pay: %d\n",p1->pay);
 free(p1);
 return 0;
}
