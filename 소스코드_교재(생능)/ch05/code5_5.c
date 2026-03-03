#include <stdio.h>

int main(void) {
    printf("=== [ 디펜스 게임 시작 ] ===\n");

    // [바깥쪽 반복문] 라운드(Wave) 관리: 총 3번의 웨이브가 옵니다.
    for (int wave = 1; wave <= 3; wave++) {
        
        printf("\nWARNING: 제 %d 웨이브가 시작됩니다!\n", wave);
        printf("------------------------------\n");

        // [안쪽 반복문] 몬스터 소환: 각 웨이브마다 고블린이 5마리씩 나옵니다.
        // 바깥쪽(wave)이 1번 실행될 때, 이 안쪽(goblin)은 5번 실행됩니다.
        for (int goblin = 1; goblin <= 5; goblin++) {
            printf("  > [웨이브 %d] 고블린 %d호가 등장했습니다!\n", wave, goblin);
        }
        
        // 안쪽 반복문(5마리 소환)이 끝나야 웨이브가 끝납니다.
        printf("------------------------------\n");
        printf("제 %d 웨이브 클리어! 잠시 정비하세요.\n", wave);
    }
    
    printf("\n=== [ 모든 몬스터를 처치했습니다! 승리! ] ===\n");

    return 0;
}