#include <stdio.h>

int main(void) {
    int level = 5; // 현재 레벨 5

    printf("=== [ 거짓말 탐지기 ] ===\n");
    printf("내 레벨은 5인가? : %d \n", level == 5);
    printf("내 레벨은 10보다 큰가? : %d \n", level > 10);
    printf("내 레벨은 10보다 작은가? : %d \n", level < 10);
    printf("내 레벨은 5가 아닌가? : %d \n", level != 5);

    return 0;
}