#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int level;

    printf("=== [ 해골 던전 입구 ] ===\n");
    printf("문지기: 멈춰라! 네 녀석의 레벨은 몇이냐? : ");
    scanf("%d", &level);

    // 운명의 갈림길
    if (level >= 10) {
        // [CASE 1] 자격 충분
        printf("\n[SYSTEM] 심사 결과: 합격!\n");
        printf("문지기: 오호, 제법 강해 보이는군. 들어가라!\n");
    }
    else {
        // [CASE 2] 자격 미달 (나머지 모든 경우)
        printf("\n[SYSTEM] 심사 결과: 불합격!\n");
        printf("문지기: 엥? 고작 레벨 %d? 장난하냐?\n", level);
        printf("문지기: 더 수련하고 오거라! (문전박대 당함)\n");
    }
    return 0;
}