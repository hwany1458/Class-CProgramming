#include <stdio.h>
int main(void)
{
 double  sum=0.;
 double high[]={1.6,4.1,10.2,17.6,22.8,26.9,28.8,29.5,25.6,
                 19.7,11.5,4.2};
  for(int i=0;i<12;i+=1)
    sum+=high[i];
  printf("Æò±Õ±â¿Â : %f\n", sum/12.);
  return 0;
}
 

