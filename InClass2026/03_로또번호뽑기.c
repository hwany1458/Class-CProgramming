/* ============================================================
 * 예제 3) 로또 번호 뽑기 (1~45 중 중복 없는 6개)
 *  - 표준 라이브러리: stdlib.h(rand, srand, qsort), time.h(time)
 *  - 핵심 개념: 중복 제거, 배열 활용, 정렬(qsort)
 * ============================================================ */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PICK  6     /* 뽑을 개수 */
#define MAXN  45    /* 번호 범위 1~45 */

/* qsort 에 넘겨줄 오름차순 비교 함수 */
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(void) {
    int lotto[PICK];
    int count = 0;

    srand((unsigned int)time(NULL));

    /* 중복되지 않는 6개의 번호가 채워질 때까지 반복 */
    while (count < PICK) {
        int num = rand() % MAXN + 1;   /* 1 ~ 45 */
        int dup = 0;

        /* 이미 뽑힌 번호인지 검사 */
        for (int i = 0; i < count; i++) {
            if (lotto[i] == num) {
                dup = 1;
                break;
            }
        }

        if (!dup)                 /* 중복이 아니면 저장 */
            lotto[count++] = num;
    }

    /* 보기 좋게 오름차순 정렬 */
    qsort(lotto, PICK, sizeof(int), compare);

    printf("=== 이번 주 행운의 로또 번호 ===\n");
    for (int i = 0; i < PICK; i++)
        printf("%3d", lotto[i]);
    printf("\n");

    return 0;
}
