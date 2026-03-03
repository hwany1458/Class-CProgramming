#include<stdio.h>
#include<stdlib.h>
int main(void)
{
 int a=7, b=12;
 char bina[33],binb[33],btmp[33];
 itoa_s(a, bina, 2);
 printf(" a의 2진수:%32s\n",bina);
 itoa_s(~a, binb, 2);
 printf("~a의 2진수:%32s\n",binb);
 itoa_s(b, binb, 2);
 printf(" a의 2진수:%32s\n",bina);
 printf(" b의 2진수:%32s\n",binb);
 itoa_s(a&b, btmp, 2);
 printf(" a & b    :%32s\n",btmp);
 itoa_s(a|b, btmp, 2);
 printf(" a | b    :%32s\n",btmp);
 itoa_s(a^b, btmp, 2);
 printf(" a ^ b    :%32s\n",btmp);
 return 0;
}
