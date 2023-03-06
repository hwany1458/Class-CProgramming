#include <stdio.h>
int main(void)
{
 int ma[3][3]={{3, 8, 6}, {4, 1, 7}, {5, 2, 9}};
 int mb[3][3]={{1, 4, 9}, {6, 5, 8}, {2, 3, 7}};
 int i;
 for(i=0; i<=2; i++)
     printf("¿ä¼Ò%d%d  ma=%d  mb=%d\n", i, i, ma[i][i], mb[i][i]);
 return 0;
}

