#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("1부터n까지 정수 합\n");
    printf("정수 n 입력 :");
    scanf("%d", &n);
    for (i = 1; sum <=100; i += 1)
        sum += i;
    printf("합 : %d, i=%d\n", sum, i - 1);
}





