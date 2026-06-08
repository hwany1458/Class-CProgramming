/* ============================================================
 * 예제 1) 주사위 2개를 던져서 앞으로 전진하기
 *  - 표준 라이브러리: stdlib.h(rand, srand), time.h(time)
 *  - 핵심 개념: 1~6 범위의 난수 만들기, 누적(전진), 반복문
 * ============================================================ */
#include <stdio.h>
#include <stdlib.h>   /* rand(), srand() */
#include <time.h>     /* time()          */

#define GOAL  30      /* 결승선 위치 */

/* 1 ~ 6 사이의 주사위 눈을 반환하는 함수 */
int rollDice(void) {
    return rand() % 6 + 1;   /* 0~5 에 +1 => 1~6 */
}

int main(void) {
    int position = 0;   /* 현재 위치(말의 위치) */
    int turn = 0;       /* 던진 횟수            */

    /* 매 실행마다 다른 결과가 나오도록 현재 시각으로 시드 설정 */
    srand((unsigned int)time(NULL));

    printf("=== 주사위 전진 게임 (목표 %d칸) ===\n\n", GOAL);

    while (position < GOAL) {
        int d1 = rollDice();
        int d2 = rollDice();
        int sum = d1 + d2;

        turn++;
        position += sum;   /* 두 눈의 합만큼 전진 */

        printf("[%2d턴] 주사위: %d + %d = %2d  ->  현재 위치: %d칸\n",
               turn, d1, d2, sum, position);
    }

    printf("\n결승선 통과! 총 %d번 만에 %d칸에 도착했습니다.\n",
           turn, position);
    return 0;
}
