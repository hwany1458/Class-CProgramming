#include<stdio.h>
void main()
{
	int i, j, k, l;

	i = 1, j = 2, k = 3, l = 4;
	i += 1; /* i = i + 1 */
	j -= 2; /* j = j - 2 */
	k *= 3; /* k = k * 3 */
	l /= 4; /* l = l / 3 */
	printf(" i = %d, j = %d, k = %d , l = % d\n", i, j, k, l);

	i = 1, j = 2, k = 3, l = 4;
	i = i + 1; /* i += 1 */
	j = j - 2; /* j -= 2 */
	k = k * 3; /* k *= 3 */
	l = l / 3; /* l /= 4 */
	printf(" i = %d, j = %d, k = %d , l = % d \n", i, j, k, l);
}