#include <stdio.h>
void count(void);
int main(void)
{
    for (int i = 1; i <= 3; i++)
        count();
    return 0;
}
void count(void)
{
    int acnt = 0;
    static int stcnt = 0;
    acnt += 1;
    stcnt += 1;
    printf("auto count=%d, static count= %d\n", acnt, stcnt);
}

