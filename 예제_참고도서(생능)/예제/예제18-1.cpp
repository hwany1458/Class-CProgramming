#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 char *ptr;
 int size;
 printf("입력할 문자열의 길이를\n");
 printf("byte수로 입력하고 Enter>");
 scanf("%d",&size);
 ptr=(char *)malloc(size+1);
 printf("%d개의 문자열을\n", size);
 printf("공백없이 입력하고 Enter>");
 scanf("%s", ptr);
 printf("입력된 문자열 : %s\n",ptr);
 free(ptr);
 return 0;
}

