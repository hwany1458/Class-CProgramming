#include <stdio.h>
void main()
{
    int i, j;
    for (j = 1; j <= 9; j += 1)
    {
        for (i = 1; i <= 9; i += 1)
            printf("%d*%d=%2d ", 1, i, 1 * i);
        printf("\n");
    }
}

