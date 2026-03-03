#include <stdio.h>
int array_sum(int a[]);
int main(void)
{
    int korea[4] = { 15, 17, 27, 32 };
    int china[4] = { 27, 16, 19, 11 };
    printf("합계=%d\n", array_sum(korea));
    printf("합계=%d\n", array_sum(china));
    return 0;
}
int array_sum(int a[])
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
        sum += a[i];
    return sum;
}

