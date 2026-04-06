#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int level;

    printf("=== [ 해골 던전 입구 ] ===\n");
    printf("문지기: 멈춰라! 네 녀석의 레벨은 몇이냐? : ");
    scanf("%d", &level);

    // 여기가 핵심! if 문 등장
    if (level >= 10) {
        printf("\n[SYSTEM] 심사 결과: 합격!\n");
        printf("문지기: 오호, 제법 강해 보이는군.\n");
        printf("문지기: 문을 열어주겠다. 들어가라! (끼이익...)\n");
    }

    printf("\n(상황 종료)\n"); // 이 줄은 if문 바깥이라 무조건 실행됨
    return 0;
}