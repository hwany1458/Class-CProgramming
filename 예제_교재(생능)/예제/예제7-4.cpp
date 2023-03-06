#include <stdio.h>
void main()
{
    int value;
    printf("정수를 입력하고 Enter>");
    scanf("%d", &value);
    if (value > 0)
        printf("양수입니다.\n");
    else if (value < 0)
        printf("음수입니다.\n");
    else
        printf("0입니다.\n");
}
