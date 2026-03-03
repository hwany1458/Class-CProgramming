#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch1;
    printf("문자를 입력하고 Enter>");
    scanf("%c", &ch1);
    if (isdigit(ch1))
        printf("숫자입니다.\n");
    else if (isalpha(ch1))
        if (islower(ch1))
            printf("대문자 : %c\n", toupper(ch1));
        else
            printf("소문자 : %c\n", tolower(ch1));
}


