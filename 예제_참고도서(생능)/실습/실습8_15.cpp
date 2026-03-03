#include <stdio.h>
void main()
{
 double i, n; 
 double sum=1.;
 printf("1부터 n까지의 곱 계산\n");
 printf("정수 n 입력 :");
 scanf("%lf", &n);
 for(i=1.;i<=n;i+=1.)
   sum*=i;
 printf("1부터 %.f까지의 곱:%.f\n", n, sum);
}



