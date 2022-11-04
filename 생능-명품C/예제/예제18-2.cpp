#include<stdio.h>
#include<stdlib.h>
struct person
{
    char *name;
    char *phone_num;
    int bell_num;
};
int main(void)
{
 struct person p; 
 p.name=(char*)malloc(sizeof(char) * 20);
 p.phone_num=(char*)malloc(sizeof(char) * 14);
 printf("이름 입력 >");
 scanf("%s", p.name);
 printf("휴대폰 입력 >");
 scanf("%s", p.phone_num);
 printf("벨소리 입력>");
 scanf("%d", &p.bell_num);
 printf("이름  : %s\n", p.name);
 printf("휴대폰: %s\n", p.phone_num);
 printf("벨소리: %d\n", p.bell_num);
 return 0;
}
