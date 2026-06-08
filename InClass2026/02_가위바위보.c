/* ============================================================
 * 예제 2) 가위바위보 (사람 vs 컴퓨터)
 *  - 표준 라이브러리: stdlib.h(rand, srand), time.h(time)
 *  - 핵심 개념: 0~2 난수로 컴퓨터 선택, 승패 판정 로직
 * ============================================================ */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 0=가위, 1=바위, 2=보 */
const char *NAME[3] = { "가위", "바위", "보" };

int main(void) {
    int user, com;

    srand((unsigned int)time(NULL));

    printf("=== 가위바위보 ===\n");
    printf("0: 가위, 1: 바위, 2: 보\n");
    printf("당신의 선택> ");

    if (scanf("%d", &user) != 1 || user < 0 || user > 2) {
        printf("잘못된 입력입니다. 0, 1, 2 중에서 선택하세요.\n");
        return 1;
    }

    com = rand() % 3;   /* 컴퓨터는 0~2 중 무작위 선택 */

    printf("\n나   : %s\n", NAME[user]);
    printf("컴퓨터: %s\n\n", NAME[com]);

    /* 승패 판정
     *  (user - com + 3) % 3 == 0  -> 비김
     *  (user - com + 3) % 3 == 1  -> 사람이 이김 (가위>보, 바위>가위, 보>바위)
     *  그 외                      -> 사람이 짐 */
    int result = (user - com + 3) % 3;

    if (result == 0)
        printf(">> 비겼습니다!\n");
    else if (result == 1)
        printf(">> 당신이 이겼습니다! :)\n");
    else
        printf(">> 당신이 졌습니다. :(\n");

    return 0;
}
