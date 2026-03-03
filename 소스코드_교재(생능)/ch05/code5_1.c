#include <stdio.h>

int main(void) {
    int stamina = 5; // 현재 체력

    printf("=== [ 허수아비 훈련 시작 ] ===\n");

    // "체력이 0보다 큰 동안" 계속 반복해라
    while (stamina > 0) 
    {
        printf("얍! 허수아비를 공격했습니다. (남은 체력: %d)\n", stamina - 1);
        
        // 중요! 체력을 1 깎습니다. (이게 없으면 어떻게 될까요?)
        stamina = stamina - 1; 
    }

    printf("=== [ 훈련 종료 ] ===\n");
    printf("교관: 체력이 다 떨어졌군. 쉬도록 해라.\n");

    return 0;
}