#include <stdio.h>
int main(void)
{
 int num[3], i;
 for(i=0;i<3;i+=1)
   scanf("%d",&num[i] );
 for(i=0;i<3;i+=1)
   printf("%d\n",num[i] );
 return 0;
}
