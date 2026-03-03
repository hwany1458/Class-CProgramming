#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    int level;

    printf("=== [모험가 길드 등급 심사] ===\n");
    printf("현재 레벨을 입력하세요: ");
    scanf("%d", &level);

    if (level >= 99) {
        printf("[결과] 당신은 '전설의 용사(S급)' 입니다!\n");
        printf("길드장: 영광입니다! VIP 룸으로 모시겠습니다.\n");
    }
    else if (level >= 50) {
        printf("[결과] 당신은 '숙련된 모험가(A급)' 입니다.\n");
        printf("길드장: 믿음직하군. 어려운 임무를 맡기겠다.\n");
    }
    else if (level >= 10) {
        printf("[결과] 당신은 '일반 모험가(B급)' 입니다.\n");
        printf("길드장: 열심히 활동하게.\n");
    }
    else {
        printf("[결과] 당신은 '초보자(F급)' 입니다.\n");
        printf("길드장: 앞마당에서 슬라임부터 잡고 오게.\n");
    }

    return 0;
}