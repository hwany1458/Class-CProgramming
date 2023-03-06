#include <stdio.h>
void main()
{
    int age;
    printf("나이를 입력하고 Enter>");
    scanf("%d", &age);
    if (19 <= age)
        printf("티켓 가격 : 7,000원\n");
    else if (12 <= age)
        printf("티켓 가격 : 5,000원\n");
    else
        printf("티켓 가격 : 무료\n");
}

