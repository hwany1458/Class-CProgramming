#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
   srand(time(NULL));
   for(int i=1;i<=10;i+=1)
      printf("%d\n", rand()%100+1);
}
