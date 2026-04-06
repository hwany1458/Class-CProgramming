#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int level;
    int hasTicket; // 1이면 있음, 0이면 없음

    printf("=== [해골 던전 2차 보안 검색대] ===\n");
    printf("1. 레벨을 입력하세요: ");
    scanf("%d", &level);

    // 1차 관문: 레벨 검사
    if (level >= 10) {
        printf("1차 심사 합격! 출입증을 확인합니다.\n");
        printf("2. 출입증이 있나요? (1:있음, 0:없음): ");
        scanf("%d", &hasTicket);
        // 2차 관문: 아이템 검사 (if 문 안에 또 if 문!)
        if (hasTicket == 1) {
            printf("최종 합격: 문을 열어주겠다!\n");
        }
        else {
            printf("불합격: 레벨은 되는데 출입증이 없군. 돌아가라!\n");
        }
    }
    else {
        printf("1차 불합격: 레벨이 낮아서 출입증 검사도 안 합니다.\n");
    }
    return 0;
}