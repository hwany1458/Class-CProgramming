//짝수합
#include <stdio.h>
void main()
{
    int i, n, sum = 0;
    printf("정수를 입력하고 Enter>");
    scanf("%d", &n);
    for (i = 1; i <= n; i += 1)
    {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("1부터 %d까지 짝수합=%d\n", n, sum);
}



