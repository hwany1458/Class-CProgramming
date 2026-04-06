#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int level;
    int gold;

    printf("=== [ 해골 던전 입구 ] ===\n");
    
    printf("1. 레벨을 입력하세요: ");
    scanf("%d", &level);
    
    printf("2. 소지금을 입력하세요: ");
    scanf("%d", &gold);

    // 깐깐한 심사 (AND)
    if (level >= 10 && gold >= 500) 
    {
        printf("\n[심사 통과] 조건이 완벽하군. 어서 와라!\n");
        printf("(입장료 500골드를 지불했습니다.)\n");
    }
    else 
    {
        printf("\n[심사 탈락] 레벨이 낮거나 돈이 부족하다!\n");
        printf("문지기: 둘 다 준비해 오거라.\n");
    }
    return 0;
}