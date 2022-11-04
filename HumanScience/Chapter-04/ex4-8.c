#include<stdio.h>
void main()
{
	int i, j, k;
	j = (i = 3, ++i + 5); /* i = 3, i = i + 1, j = j + 5 */
	printf("\n i = %d j = %d", i, j);
	j = (k = 3, k++ + 5); /* k = 3, j = k + 5, k = k + 1 */
	printf("\n k = %d j = %d \n", k, j);
}