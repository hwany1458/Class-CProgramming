#include<stdio.h>
#include<string.h>
int main(void)
{
  int n, i, j=0, k=0, p, q, fibo[10], t;
  char *a="abcdefghijklmnopqrs", key;
  n=strlen(a);
  fibo[1] = 1;
  fibo[2] = 1;
  for(i=3; i<10; i++)
     fibo[i] = fibo[i-2] + fibo[i-1];
  printf("Current Data \n\n");
  for(i=0;i<20;i++)
    printf(" %c ",a[i]);
  printf("\n\n Input Key :");
  scanf("%c",&key);
  while(n>j)
  { k=k+1;
      j=fibo[k];
  }
  i=fibo[k-1];
  p=fibo[k-2];
  q=fibo[k-3];
 while(i)
 {
  if (key < a[i])
  { 
   if (q==0)
     i=0;
   else
   { 
    i=i-q;
    t=p;
    p=q;
    q=t-q;
   }
 }
 else if (key == a[i])
  { 
    printf("\n Find Key %c in index %d \n", a[i], i);
    break; 
  }
 else
 {
   if (p==1)
     i=0;
   else
   { 
     i=i+q;
     p=p-q;
     q=q-p;
   }
  }
 }
 return 0;
}
