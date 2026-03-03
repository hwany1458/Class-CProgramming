#include <stdio.h>

int main(void) {
    int try_count = 0; // 시도 횟수

    printf("=== [ 아이템 뽑기 시작 ] ===\n");

    // while(1): 조건이 무조건 '참'이므로 영원히 반복합니다.
    while (1) 
    {
        try_count = try_count + 1; // 횟수 증가
        printf("%d번째 상자를 엽니다... ", try_count);

        // 만약 7번째 상자라면 '전설의 검' 당첨!
        if (try_count == 7) 
        {
            printf("[당첨!] 전설의 검을 얻었습니다!\n");
            break; // 중요! 반복문을 즉시 탈출합니다.
        }

        // 7번째가 아니라면 꽝
        printf("꽝입니다. 다시 시도합니다.\n");
    }

    // break를 하면 이곳으로 이동합니다.
    printf("=== [ 뽑기 종료 ] ===\n");
    printf("총 %d번 만에 성공했군요.\n", try_count);

    return 0;
}