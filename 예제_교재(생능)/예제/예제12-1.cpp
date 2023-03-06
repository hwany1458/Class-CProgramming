#include <stdio.h>
#include <ctype.h>
int main(void)
{
    char ch1 = '1', ch2 = 'A';
    if (isalpha(ch2))
        printf("%c는 문자입니다.\n", ch2);
    if (isdigit(ch1))
        printf("%c는 숫자입니다.\n", ch1);
    printf("소문자 %c\n", tolower(ch2));
    return 0;
}
