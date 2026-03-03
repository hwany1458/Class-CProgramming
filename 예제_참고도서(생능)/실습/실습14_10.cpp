#include <stdio.h>
#include <string.h>
int my_strlen(char s[]);
int main(void)
{
    char s[15] = "C program";
    printf("length of s : %d\n", my_strlen(s));
    return 0;
}

int my_strlen(char s[])
{
    int sum = 0;
    while (s[sum] != '\0')
        sum++;
    return sum;
}

